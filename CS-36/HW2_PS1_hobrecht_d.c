/***********************************************************/
/* Name: Dane Hobrecht                                     */
/* Student ID: 1103521                                     */
/* Date: 02/22/22                                          */
/* Homework 2 Program Set 1                                */
/* This program calculates tax due based on filing status. */
/***********************************************************/

#include <stdio.h>

int main()
{
	/* Constants */
	char MENU_LINE[34] = "************Menu****************\n";
	char STAR_LINE[34] = "********************************\n";

	/* Standard declarations */
	int status, ti;
	float temp, tax;

	/* Input */
	printf("%s1) Single\n2) Married Filing Jointly\n3) Married Filing Seperately\n4) Head of Household\n5) Exit\n\n%s", MENU_LINE, STAR_LINE);
	printf("\nEnter status : ");
	scanf("%i", &status);

	/* Processing & calculations */
	switch(status)
	{
		case 1:
			printf("Enter your taxable TI : $");
			scanf("%i", &ti);
			if (ti > 0 && ti <= 24000) {
				tax = 0.15 * ti;
			}
			if (ti > 24000 && ti <= 58000) {
				tax = 3600.00 + (0.28 * (ti - 24000));
			}
			if (ti > 58000 && ti <= 121300) {
				tax = 13162.00 + (0.31 * (ti - 58000));
			}
			if (ti > 121300 && ti <= 263750) {
				tax = 32738.50 + (0.36 * (ti - 121300));
			}
			if (ti > 263750) {
				tax = 84020.50 + (0.396 * (ti - 263750));
			}
			break;
		case 2:
			printf("Enter your taxable TI : $");
			scanf("%i", &ti);
			if (ti > 0 && ti <= 40100) {
				tax = 0.15 * ti;
			}
			if (ti > 40100 && ti <= 96900) {
				tax = 6015.00 + (0.28 * (ti - 40100));
			}
			if (ti > 96900 && ti <= 147700) {
				tax = 21919.00 + (0.31 * (ti - 96900));
			}
			if (ti > 147700 && ti <= 263750) {
				tax = 37667.00 + (0.36 * (ti - 147700));
			}
			if (ti > 263750) {
				tax = 79445.00 + (0.396 * (ti - 263750));
			}
			break;
		case 3:
			printf("Enter your taxable TI : $");
			scanf("%i", &ti);
			if (ti > 0 && ti <= 20050) {
				tax = 0.15 * ti;
			}
			if (ti > 20050 && ti <= 48450) {
				tax = 3007.50 + (0.28 * (ti - 20050));
			}
			if (ti > 48450 && ti <= 73850) {
				tax = 10959.50 + (0.31 * (ti - 48450));
			}
			if (ti > 73850 && ti <= 131875) {
				tax = 18833.50 + (0.36 * (ti - 73850));
			}
			if (ti > 131875) {
				tax = 39722.50 + (0.396 * (ti - 131875));
			}
			break;
		case 4:
			printf("Enter your taxable TI : $");
			scanf("%i", &ti);
			if (ti > 0 && ti <= 32150) {
				tax = 0.15 * ti;
			}
			if (ti > 32150 && ti <= 83050) {
				tax = 4822.50 + (0.28 * (ti - 32150));
			}
			if (ti > 83050 && ti <= 134500) {
				tax = 19074.50 + (0.31 * (ti - 83050));
			}
			if (ti > 134500 && ti <= 263750) {
				tax = 35074.00 + (0.36 * (ti - 134500));
			}
			if (ti > 263750) {
				tax = 81554.00 + (0.396 * (ti - 263750));
			}
			break;
		case 5:
			puts("\nExit program...");
			return 0;
		default:
			puts("\nYou entered a wrong status. Program Exit . . .");
			return 0;
	}

	/* Output */
	printf("\nThe taxes owed are: $%.2f\n", tax);

	return 0;
}

/*
Test Run 1
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 1
Enter your taxable TI: $50000

The taxes owed are: $10880.00

Test Run 2
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 5

Exit program...

Test Run 3
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : a

You entered a wrong status. Program Exit . . .

Test Run 4
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter status : 7

You entered a wrong status. Program Exit . . .

Test Run 5
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Seperately
4) Head of Household
5) Exit

********************************

Enter status : 2
Enter your taxable TI : $45000

The taxes owed are: $7387.00

Test Run 6
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Seperately
4) Head of Household
5) Exit

********************************

Enter status : 3
Enter your taxable TI : $67890

The taxes owed are: $16985.90

Test Run 7
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Seperately
4) Head of Household
5) Exit

********************************

Enter status : 4
Enter your taxable TI : $32700

The taxes owed are: $4976.50

Test Run 8
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Seperately
4) Head of Household
5) Exit

********************************

Enter status : a wrong status

You entered a wrong status. Program Exit . . .
*/
