# Dane Hobrecht
# 1103521
# This program calculates tax information based on 2017/2018 data.

# Initial input
income = int(input("Enter income as an integer with no commas: "))

while (income != -1):
	# Standard declarations
	old_income = income
	new_income = income

	# Processing & calculations
	## Old income tax brackets (2017 and older)
	if (old_income > 0):
		if (old_income >= 9325):
			old_temp = ((9325 - 0) * 0.10)
		else:
			old_temp = ((old_income - 0) * 0.10)
		old_tax = old_temp
	if (old_income > 9325):
		if (old_income >= 37950):
			old_temp = ((37950 - 9325) * 0.15)
		else:
			old_temp = ((old_income - 9325) * 0.15)
		old_tax = old_tax + old_temp
	if (old_income > 37950):
		if (old_income >= 91900):
			old_temp = ((91900 - 37950) * 0.25)
		else:
			old_temp = ((old_income - 37950) * 0.25)
		old_tax = old_tax + old_temp
	if (old_income > 91900):
		if (old_income >= 191650):
			old_temp = ((191650 - 91900) * 0.28)
		else:
			old_temp = ((old_income - 91900) * 0.28)
		old_tax = old_tax + old_temp
	if (old_income > 191650):
		if (old_income >= 416700):
			old_temp = ((416700 - 191650) * 0.33)
		else:
			old_temp = ((old_income - 191650) * 0.33)
		old_tax = old_tax + old_temp
	if (old_income > 416700):
		if (old_income >= 418400):
			old_temp = ((418400 - 416700) * 0.35)
		else:
			old_temp = ((old_income - 416700) * 0.35)
		old_tax = old_tax + old_temp
	if (old_income > 418400):
		old_temp = ((old_income - 418400) * 0.396)
		old_tax = old_tax + old_temp

	# New income tax brackets (2018 and newer)
	if (new_income > 0):
		if (new_income >= 9525):
			new_temp = ((9525 - 0) * 0.10)
		else:
			new_temp = ((new_income - 0) * 0.10)
		new_tax = new_temp
	if (new_income > 9525):
		if (new_income >= 38700):
			new_temp = ((38700 - 9525) * 0.12)
		else:
			new_temp = ((new_income - 9325) * 0.12)
		new_tax = new_tax + new_temp
	if (new_income > 38700):
		if (new_income >= 82500):
			new_temp = ((82500 - 38700) * 0.22)
		else:
			new_temp = ((new_income - 38700) * 0.22)
		new_tax = new_tax + new_temp
	if (new_income > 82500):
		if (new_income >= 157500):
			new_temp = ((157500 - 82500) * 0.24)
		else:
			new_temp = ((new_income - 82500) * 0.24)
		new_tax = new_tax + new_temp
	if (new_income > 157500):
		if (new_income >= 200000):
			new_temp = ((200000 - 157500) * 0.32)
		else:
			new_temp = ((new_income - 157500) * 0.32)
		new_tax = new_tax + new_temp
	if (new_income > 200000):
		if (new_income >= 500000):
			new_temp = ((500000 - 200000) * 0.35)
		else:
			new_temp = ((new_income - 200000) * 0.35)
		new_tax = new_tax + new_temp
	if (new_income > 500000):
		new_temp = ((new_income - 500000) * 0.37)
		new_tax = new_tax + new_temp

	difference = new_tax - old_tax
	difference_percent = (difference / old_tax) * 100
	if (difference_percent < 0):
		difference_percent = difference_percent * -1

	# Output
	print("Income: " + str(format(income, ".2f")))
	print("2017 tax: " + str(format(old_tax, ".2f")))
	print("2018 tax: " + str(format(new_tax, ".2f")))
	print("Difference: " + str(format(difference, ".2f")))
	print("Difference (percent): " + str(format(difference_percent, ".2f")) + "\n")

	# Input
	income = int(input("Enter income as an integer with no commas: "))

##Test Run 1
##Enter income as an integer with no commas: 8000
##Income: 8000
##2017 tax: 800.00
##2018 tax: 800.00
##Difference: 0.00
##Difference (percent): 0.00
##
##Enter income as an integer with no commas: 15000
##Income: 15000
##2017 tax: 1783.75
##2018 tax: 1609.50
##Difference: -174.25
##Difference (percent): 9.77
##
##Enter income as an integer with no commas: 40000
##Income: 40000
##2017 tax: 5738.75
##2018 tax: 4739.50
##Difference: -999.25
##Difference (percent): 17.41
##
##Enter income as an integer with no commas: 100000
##Income: 100000
##2017 tax: 20981.75
##2018 tax: 18289.50
##Difference: -2692.25
##Difference (percent): 12.83
##
##Enter income as an integer with no commas: 200000
##Income: 200000
##2017 tax: 49399.25
##2018 tax: 45689.50
##Difference: -3709.75
##Difference (percent): 7.51
##
##Enter income as an integer with no commas: 500000
##Income: 500000
##2017 tax: 153818.85
##2018 tax: 150689.50
##Difference: -3129.35
##Difference (percent): 2.03
##
##Enter income as an integer with no commas: 1000000
##Income: 1000000
##2017 tax: 351818.85
##2018 tax: 335689.50
##Difference: -16129.35
##Difference (percent): 4.58
##
##Enter income as an integer with no commas: 10000000
##Income: 10000000
##2017 tax: 3915818.85
##2018 tax: 3665689.50
##Difference: -250129.35
##Difference (percent): 6.39
##
##Enter income as an integer with no commas: -1
##
##Test Run 2
##Enter income as an integer with no commas: -1
##
##Test Run 3
##Enter income as an integer with no commas: 6789
##Income: 6789.00
##2017 tax: 678.90
##2018 tax: 678.90
##Difference: 0.00
##Difference (percent): 0.00
##
##Enter income as an integer with no commas: 16892
##Income: 16892.00
##2017 tax: 2067.55
##2018 tax: 1860.54
##Difference: -207.01
##Difference (percent): 10.01
##
##Enter income as an integer with no commas: 986 
##Income: 986.00
##2017 tax: 98.60
##2018 tax: 98.60
##Difference: 0.00
##Difference (percent): 0.00
##
##Enter income as an integer with no commas: -1
##
##Test Run 4
##Enter income as an integer with no commas: 32567
##Income: 32567.00
##2017 tax: 4418.80
##2018 tax: 3741.54
##Difference: -677.26
##Difference (percent): 15.33
##
##Enter income as an integer with no commas: 421324
##Income: 421324.00
##2017 tax: 122663.15
##2018 tax: 123152.90
##Difference: 489.75
##Difference (percent): 0.40
##
##Enter income as an integer with no commas: 86543
##Income: 86543.00
##2017 tax: 17374.50
##2018 tax: 15059.82
##Difference: -2314.68
##Difference (percent): 13.32
##
##Enter income as an integer with no commas: -1
##
##Test Run 5
##Enter income as an integer with no commas: 93215
##Income: 93215.00
##2017 tax: 19081.95
##2018 tax: 16661.10
##Difference: -2420.85
##Difference (percent): 12.69
##
##Enter income as an integer with no commas: 32578
##Income: 32578.00
##2017 tax: 4420.45
##2018 tax: 3742.86
##Difference: -677.59
##Difference (percent): 15.33
##
##Enter income as an integer with no commas: 76000
##Income: 76000.00
##2017 tax: 14738.75
##2018 tax: 12659.50
##Difference: -2079.25
##Difference (percent): 14.11
##
##Enter income as an integer with no commas: -1
