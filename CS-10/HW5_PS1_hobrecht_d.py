# Dane Hobrecht
# 1103521
# This program calculates and displays loan information for buying a car.

class Loan:
	def __init__(self, annualInterestRate: float, numberOfYears: float, loanAmount: float, borrowersName: str):
		self.__annualInterestRate = annualInterestRate
		self.__numberOfYears = numberOfYears
		self.__loanAmount = loanAmount
		self.__borrowersName = borrowersName

	### Getters
	def getAnnualInterestRate(self) -> float:
		return self.__annualInterestRate

	def getNumberOfYears(self) -> int:
		return self.__numberOfYears

	def getLoanAmount(self) -> int:
		return self.__loanAmount

	def getBorrowersName(self) -> str:
		return self.__borrowersName

	### Setters
	def setAnnualInterestRate(self, annualInterestRate: float) -> float:
		self.__annualInterestRate = annualInterestRate

	def setNumberOfYears(self, numberOfYears: int) -> int:
		self.__numberOfYears = numberOfYears

	def setLoanAmount(self, loanAmount: int) -> int:
		self.__loanAmount = loanAmount

	def setBorrowersName(self, borrowersName: str) -> str:
		self.__borrowersName = borrowersName

	### Methods
	def getMonthlyPayment(self) -> float:
		"""Method calculates the monthly payment"""
		monthlyInterestRate = self.__annualInterestRate / 1200
		monthlyPayment = self.__loanAmount * monthlyInterestRate / (1 - (1 / (1 + monthlyInterestRate) ** (self.__numberOfYears * 12)))
		return monthlyPayment

	def getTotalPayment(self) -> float:
		"""Method calculates the total payment"""
		totalPayment = self.getMonthlyPayment() * self.__numberOfYears * 12
		return totalPayment

def main():
	# User input
	annualInterestRate = float(input("Enter yearly interest rate: "))
	numberOfYears = float(input("Enter number of years as an integer: "))
	loanAmount = float(input("Enter loan amount: "))
	borrowersName = str(input("Enter a borrower's name: "))
	loan = Loan(annualInterestRate, numberOfYears, loanAmount, borrowersName)
	print("The loan is for", loan.getBorrowersName())
	print("The monthly payment is", format(loan.getMonthlyPayment(), '.2f'))
	print("The total payment is", format(loan.getTotalPayment(), ',.2f'))

	confirmation = input("\nDo you want to change the loan amount? Y for yes or enter to quit ")
	while (confirmation == "Y"):
		newLoanAmount = float(input("Enter new loan amount  "))
		loan = Loan(annualInterestRate, numberOfYears, newLoanAmount, borrowersName)
		print("The loan is for", loan.getBorrowersName())
		print("The monthly payment is", format(loan.getMonthlyPayment(), '.2f'))
		print("The total payment is", format(loan.getTotalPayment(), ',.2f'))
		confirmation = input("\nDo you want to change the loan amount? Y for yes or enter to quit ")

if __name__ == "__main__":
	main()

##Test Run 1
##Enter yearly interest rate: 2.5
##Enter number of years as an integer: 5
##Enter loan amount: 1000.00
##Enter a borrower's name: John Jones
##The loan is for John Jones
##The monthly payment is 17.75
##The total payment is 1,064.84
##
##Do you want to change the loan amount? Y for yes or enter to quit Y
##Enter new loan amount  5000
##The loan is for John Jones
##The monthly payment is 88.74
##The total payment is 5,324.21
##
##Do you want to change the loan amount? Y for yes or enter to quit 
##
##Test Run 2
##Enter yearly interest rate: 0.1
##Enter number of years as an integer: 1
##Enter loan amount: 1 
##Enter a borrower's name: One
##The loan is for One
##The monthly payment is 0.08
##The total payment is 1.00
##
##Do you want to change the loan amount? Y for yes or enter to quit
##
##Test Run 3
##Enter yearly interest rate: 0.9999999999   
##Enter number of years as an integer: 100
##Enter loan amount: 100
##Enter a borrower's name: Guy Man   
##The loan is for Guy Man
##The monthly payment is 0.13
##The total payment is 158.24
##
##Do you want to change the loan amount? Y for yes or enter to quit 
##
##Test Run 4
##Enter yearly interest rate: 7.8
##Enter number of years as an integer: 12
##Enter loan amount: 800000.00
##Enter a borrower's name: Delilah Verdy
##The loan is for Delilah Verdy
##The monthly payment is 8572.13
##The total payment is 1,234,387.15
##
##Do you want to change the loan amount? Y for yes or enter to quit 
##
##Test Run 5
##Enter yearly interest rate: 0.5
##Enter number of years as an integer: 6
##Enter loan amount: 500.00
##Enter a borrower's name: First Last
##The loan is for First Last
##The monthly payment is 7.05
##The total payment is 507.64
##
##Do you want to change the loan amount? Y for yes or enter to quit Y
##Enter new loan amount  600.00
##The loan is for First Last
##The monthly payment is 8.46
##The total payment is 609.17
##
##Do you want to change the loan amount? Y for yes or enter to quit Y
##Enter new loan amount  700.00
##The loan is for First Last
##The monthly payment is 9.87
##The total payment is 710.70
##
##Do you want to change the loan amount? Y for yes or enter to quit 
