# Dane Hobrecht
# 1103521
# This program displays information based on given stock data.

# Output
def output(stock_name, stock_paid, commission_paid, stock_sold, commission_sold, profit):
	print("\n\nStock name : " + stock_name)
	print("Amount paid for the stock:          $" + format(stock_paid, "13,.2f"))
	print("Commission paid on the purchase:    $" + format(commission_paid, "13,.2f"))
	print("Amount the stock sold for:          $" + format(stock_sold, "13,.2f"))
	print("Commission paid on the sale:        $" + format(commission_sold, "13,.2f"))
	print("Profit (or loss if negative):       $" + format(profit, "13,.2f"))

# Processing & calcualations
def calculate(stock_name, number_of_shares, purchase_price, selling_price, commission):
	stock_paid = (number_of_shares * purchase_price)
	commission_paid = (stock_paid * commission)
	stock_sold = (number_of_shares * selling_price)
	commission_sold = (stock_sold * commission)
	profit = (stock_sold - commission_paid) - (stock_paid + commission_sold)
	output(stock_name, stock_paid, commission_paid, stock_sold, commission_sold, profit)

# Input
def data_input():
	stock_name = str(input("\nEnter Stock name: "))
	number_of_shares = int(input("Enter Number of shares : "))
	purchase_price = float(input("Enter Purchase price : "))
	selling_price = float(input("Enter selling price : "))
	commission = float(input("Enter Commission : "))
	calculate(stock_name, number_of_shares, purchase_price, selling_price, commission)

def main():
	confirmation = str(input("Enter your stock information? Type 'y' for yes, or 'n' for no: "))
	while (confirmation == 'y'):
		data_input()
		confirmation = str(input("\nEnter your stock information? Type 'y' for yes, or 'n' for no: "))

if __name__ == "__main__":
	main()

##Test Run 1
##Enter your stock information? Type 'y' for yes, or 'n' for no: y
##
##Enter Stock name: Kaplack, Inc.
##Enter Number of shares : 10000
##Enter Purchase price : 33.92
##Enter selling price : 35.92
##Enter Commission : 0.04
##
##
##Stock name : Kaplack, Inc.
##Amount paid for the stock:          $   339,200.00
##Commission paid on the purchase:    $    13,568.00
##Amount the stock sold for:          $   359,200.00
##Commission paid on the sale:        $    14,368.00
##Profit (or loss if negative):       $    -7,936.00
##
##Enter your stock information? Type 'y' for yes, or 'n' for no: n
##
##Test Run 2
##Enter your stock information? Type 'y' for yes, or 'n' for no: n
##
##Test Run 3
##Enter your stock information? Type 'y' for yes, or 'n' for no: y
##
##Enter Stock name: Loke, Inc.
##Enter Number of shares : 50000
##Enter Purchase price : 100.93
##Enter selling price : 147.28
##Enter Commission : 0.06
##
##
##Stock name : Loke, Inc.
##Amount paid for the stock:          $ 5,046,500.00
##Commission paid on the purchase:    $   302,790.00
##Amount the stock sold for:          $ 7,364,000.00
##Commission paid on the sale:        $   441,840.00
##Profit (or loss if negative):       $ 1,572,870.00
##
##Enter your stock information? Type 'y' for yes, or 'n' for no: n
##
##Test Run 4
##Enter your stock information? Type 'y' for yes, or 'n' for no: y
##
##Enter Stock name: Meta, Inc.
##Enter Number of shares : 2
##Enter Purchase price : 310.41
##Enter selling price : 6.66
##Enter Commission : 0.03
##
##
##Stock name : Meta, Inc.
##Amount paid for the stock:          $       620.82
##Commission paid on the purchase:    $        18.62
##Amount the stock sold for:          $        13.32
##Commission paid on the sale:        $         0.40
##Profit (or loss if negative):       $      -626.52
##
##Enter your stock information? Type 'y' for yes, or 'n' for no: n
##
##Test Run 5
##Enter your stock information? Type 'y' for yes, or 'n' for no: y
##
##Enter Stock name: Red Hat, Inc.
##Enter Number of shares : 23852
##Enter Purchase price : 187.71
##Enter selling price : 283.13
##Enter Commission : 0.09
##
##
##Stock name : Red Hat, Inc.
##Amount paid for the stock:          $ 4,477,258.92
##Commission paid on the purchase:    $   402,953.30
##Amount the stock sold for:          $ 6,753,216.76
##Commission paid on the sale:        $   607,789.51
##Profit (or loss if negative):       $ 1,265,215.03
##
##Enter your stock information? Type 'y' for yes, or 'n' for no: n
