# Dane Hobrecht
# 1103521
# This program calculates monthly interest & payments, summing a total.

# Input
annual_interest_rate = float(input('Enter annual interest rate, (e.g., 7.25) : '))
number_of_years = int(input('Enter number of years as an integer, (e.g., 5) : '))
loan_amount = float(input('Enter loan amount, (e.g., 120000.95) : '))

# Processing & calculations
monthly_interest_rate = annual_interest_rate / 1200
monthly_payment = loan_amount * monthly_interest_rate / (1 - 1 / (1 + monthly_interest_rate) ** (number_of_years * 12))
total_payment = monthly_payment * number_of_years * 12

# Output
print('\nThe monthly payment is ' + format(monthly_payment, ',.2f'))
print('The total payment is ' + format(total_payment, ',.2f'))

##Test Run 1
##Enter annual interest rate, (e.g., 7.25) : 4.5
##Enter number of years as an integer, (e.g., 5) : 30
##Enter loan amount, (e.g., 120000.95) : 350000.50
##
##The monthly payment is 1,773.40
##The total payment is 638,424.40
##
##Test Run 2
##Enter annual interest rate, (e.g., 7.25) : 6.3
##Enter number of years as an integer, (e.g., 5) : 24
##Enter loan amount, (e.g., 120000.95) : 493450.23    
##
##The monthly payment is 3,327.03
##The total payment is 958,183.25
##
##Test Run 3
##Enter annual interest rate, (e.g., 7.25) : 2.7
##Enter number of years as an integer, (e.g., 5) : 13
##Enter loan amount, (e.g., 120000.95) : 230051.35
##
##The monthly payment is 1,750.25
##The total payment is 273,038.48
##
##Test Run 4
##Enter annual interest rate, (e.g., 7.25) : 3.9
##Enter number of years as an integer, (e.g., 5) : 18
##Enter loan amount, (e.g., 120000.95) : 500432.98
##
##The monthly payment is 3,228.01
##The total payment is 697,249.64
##
##Test Run 5
##Enter annual interest rate, (e.g., 7.25) : 5.1
##Enter number of years as an integer, (e.g., 5) : 41
##Enter loan amount, (e.g., 120000.95) : 113400.78
##
##The monthly payment is 550.25
##The total payment is 270,720.79
