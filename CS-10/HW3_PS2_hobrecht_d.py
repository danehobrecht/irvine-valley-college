# Dane Hobrecht
# 1103521
# This program validates credit card numbers.

# Concludes card number validity.
def isValid(number) -> (bool):
	if (len(number) >= 13 and len(number) <= 16):
		if (number.startswith("4") or 
			number.startswith("5") or 
			number.startswith("37") or 
			number.startswith("6")):
			if (getDigit(number) == True):
				return True
			else:
				return False
	else:
		return False

# Doubles/sums every even index value.
def sumOfDoubleEvenPlace(cardNumber) -> (int):
	total = 0
	cardNumberReversed = cardNumber[::-1]
	for num in range(0, len(cardNumber) - 1, 2):
		num += 1
		value = int(cardNumberReversed[num])
		value *= 2
		if (value >= 10):
			value = str(value)
			value = int(value[0]) + int(value[1])
		total += value
	return total

# Sums the returned values of functions "sumOfDoubleEvenPlace()", and, "sumOfOddPlace()".
def getDigit(number) -> (bool):
	sumOfPlaces = sumOfDoubleEvenPlace(number) + sumOfOddPlace(number)
	if ((sumOfPlaces % 10) == 0):
		return True
	else:
		return False

# Sums every odd index value.
def sumOfOddPlace(cardNumber) -> (int):
	total = 0
	cardNumberReversed = cardNumber[::-1]
	for num in range(-1, len(cardNumber) - 1, 2):
		num += 1
		total += int(cardNumberReversed[num])
	return total

def main():
	quantity = int(input("How many credit card numbers do you want to check? "))
	while (quantity != 0):
		number = str(input("Enter a credit card number: "))
		if (isValid(number) == True):
			print(number + " is valid\n")
		else:
			print(number + " is invalid\n")
		quantity = quantity - 1

if __name__ == "__main__":
	main()

## Test Run 1
## How many credit card numbers do you want to check? 2
## Enter a credit card number: 4388576018402626
## 4388576018402626 is invalid
##
## Enter a credit card number: 4388576018410707
## 4388576018410707 is valid
##
## Test Run 2
## How many credit card numbers do you want to check? 0
##
## Test Run 3
## How many credit card numbers do you want to check? 3
## Enter a credit card number: 12345678
## 12345678 is invalid
##
## Enter a credit card number: 5169769005222217
## 5169769005222217 is valid
##
## Enter a credit card number: 6011655276746808
## 6011655276746808 is invalid
##
## Test Run 4
## How many credit card numbers do you want to check? 5
## Enter a credit card number: 5596677697542052
## 5596677697542052 is valid
##
## Enter a credit card number: 5189974629397372
## 5189974629397372 is invalid
##
## Enter a credit card number: 371059136607246
## 371059136607246 is valid
##
## Enter a credit card number: 371602937759144
## 371602937759144 is valid
##
## Enter a credit card number: 371985795731111
## 371985795731111 is invalid
##
## Test Run 5
## How many credit card numbers do you want to check? 5
## Enter a credit card number: 6011819732633224
## 6011819732633224 is valid
##
## Enter a credit card number: 6011677336711953
## 6011677336711953 is invalid
##
## Enter a credit card number: 6011917828459758
## 6011917828459758 is invalid
##
## Enter a credit card number: 6011790404428625
## 6011790404428625 is valid
##
## Enter a credit card number: 6011135108143643
## 6011135108143643 is valid
