# Dane Hobrecht
# 1103521
# This program simulates a lottery based on 2 digit integer comparison.

import random

# Initial input
guess = int(input("Enter your lottery pick ( 2 digits) or -999 to quit: "))

while (guess != -999):
	# Standard declarations
	answer = random.randint(10, 99)

	answer_int_one = answer // 10
	answer_int_two = answer % 10

	guess_int_one = guess // 10
	guess_int_two = guess % 10

	# Processing & calcualations and output
	if (guess == answer):
		print("Exact match: You win $10,000!\n")
	elif ((guess_int_one == answer_int_two and guess_int_two == answer_int_one)):
		print("Match all digits : You win $3,000\n")
	elif (str(guess_int_one) in str(answer) or str(guess_int_two) in str(answer)):
		print("Match one digit: You win $1,000\n")
	else:
		print("Sorry no match\n")

	# Input
	guess = int(input("Enter your lottery pick ( 2 digits) or -999 to quit: "))

##Test Run 1
##Enter your lottery pick ( 2 digits) or -999 to quit: 44
##Sorry no match
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 23
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 68
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 12
##Match all digits : You win $3,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 45
##Exact match: You win $10,000!
##
##Enter your lottery pick ( 2 digits) or -999 to quit: -999
##
##Test Run 2
##Enter your lottery pick ( 2 digits) or -999 to quit: 12
##Sorry no match
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 34
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 56
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 63
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 64
##Exact match: You win $10,000!
##
##Enter your lottery pick ( 2 digits) or -999 to quit: -999
##
##Test Run 3
##Enter your lottery pick ( 2 digits) or -999 to quit: 12
##Sorry no match
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 34
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 33
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 35
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 36
##Exact match: You win $10,000!
##
##Enter your lottery pick ( 2 digits) or -999 to quit: -999
##Test Run 4
##Enter your lottery pick ( 2 digits) or -999 to quit: 12
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 11
##Sorry no match
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 55
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 52
##Match all digits : You win $3,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 25
##Exact match: You win $10,000!
##
##Enter your lottery pick ( 2 digits) or -999 to quit: -999
##Test Run 5
##Enter your lottery pick ( 2 digits) or -999 to quit: 12
##Sorry no match
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 34
##Sorry no match
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 56
##Match all digits : You win $3,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 67
##Match one digit: You win $1,000
##
##Enter your lottery pick ( 2 digits) or -999 to quit: 65
##Exact match: You win $10,000!
##
##Enter your lottery pick ( 2 digits) or -999 to quit: -999
