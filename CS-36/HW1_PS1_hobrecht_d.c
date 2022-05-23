/*********************************************************/
/* Name: Dane Hobrecht                                   */
/* Student ID: 1103521                                   */
/* Date: 01/31/22                                        */
/* Homework 1 Program Set 1                              */
/* This program asks for initials and sorts given coins. */
/*********************************************************/

#include <stdio.h>

int main()
{
	/* Declarations */
	char initials[3];
	int num_quarters;
	int num_dimes;
	int num_nickels;
	int num_pennies;

	/* Input */
	printf("Enter your initials, first, middle and last: ");
	scanf("%s", initials);
	printf("\nHello %c.%c.%c., let's see what your coins are worth.\n", initials[0], initials[1], initials[2]);
	printf("Enter number of quarters: ");
	scanf("%i", &num_quarters);
	printf("Enter number of dimes: ");
	scanf("%i", &num_dimes);
	printf("Enter number of nickels: ");
	scanf("%i", &num_nickels);
	printf("Enter number of pennies: ");
	scanf("%i", &num_pennies);

	/* Processing & calculations */
	int value_quarters = num_quarters * 25;
	int value_dimes = num_dimes * 10;
	int value_nickels = num_nickels * 5;
	int value_pennies = num_pennies * 1;
	int value_total = value_quarters + value_dimes + value_nickels + value_pennies;
	int value_dollars = value_total / 100;
	int value_cents = value_total % 100;

	/* Output */
	printf("\nNumber of quarters is %i.", num_quarters);
	printf("\nNumber of dimes is %i.", num_dimes);
	printf("\nNumber of nickels is %i.", num_nickels);
	printf("\nNumber of pennies is %i.", num_pennies);
	printf("\n\nYour coins are worth %i dollars and %i cents.\n", value_dollars, value_cents);

	return 0;
}

/*
Test Run 1
Enter your initials, first, middle and last: JTK

Hello J.T.K., let's see what your coins are worth.
Enter number of quarters: 4
Enter number of dimes: 0
Enter number of nickels: 0
Enter number of pennies: 0

Number of quarters is 4.
Number of dimes is 0.
Number of nickels is 0.
Number of pennies is 0.

Your coins are worth 1 dollars and 0 cents.

Test Run 2
Enter your initials, first, middle and last: RHT

Hello R.H.T., let's see what your coins are worth.
Enter number of quarters: 0
Enter number of dimes: 10
Enter number of nickels: 0
Enter number of pennies: 0

Number of quarters is 0.
Number of dimes is 10.
Number of nickels is 0.
Number of pennies is 0.

Your coins are worth 1 dollars and 0 cents.

Test Run 3
Enter your initials, first, middle and last: C?L

Hello C.?.L., let's see what your coins are worth.
Enter number of quarters: 20
Enter number of dimes: 20
Enter number of nickels: 20
Enter number of pennies: 20

Number of quarters is 20.
Number of dimes is 20.
Number of nickels is 20.
Number of pennies is 20.

Your coins are worth 8 dollars and 20 cents.

Test Run 4
Enter your initials, first, middle and last: DMH

Hello D.M.H., let's see what your coins are worth.
Enter number of quarters: 32
Enter number of dimes: 54
Enter number of nickels: 2
Enter number of pennies: 34

Number of quarters is 32.
Number of dimes is 54.
Number of nickels is 2.
Number of pennies is 34.

Your coins are worth 13 dollars and 84 cents.

Test Run 5
Enter your initials, first, middle and last: JKR

Hello J.K.R., let's see what your coins are worth.
Enter number of quarters: 0
Enter number of dimes: 0
Enter number of nickels: 0
Enter number of pennies: 1

Number of quarters is 0.
Number of dimes is 0.
Number of nickels is 0.
Number of pennies is 1.

Your coins are worth 0 dollars and 1 cents.
*/
