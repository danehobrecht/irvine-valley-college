/*********************************************************/
/* Name: Dane Hobrecht                                   */
/* Student ID: 1103521                                   */
/* Date: 02/01/22                                        */
/* Homework 1 Program Set 2                              */
/* This program maintains information about stocks.      */
/*********************************************************/

#include <stdio.h>

int main()
{
	/* Constants */
	char STAR_LINE[35] = "*********************************\n";

	/* Standard declarations */
	char stock_name[35];
	int number_of_shares;
	float buy_price, current_price, fees;
	float initial_cost, current_cost, profit;
	float temp_profit, total_profit;

	/* STOCK 1 */

	/* Input */
	printf("%s            Stock 1\n%s", STAR_LINE, STAR_LINE);
	printf("Enter stock name ");
	gets(stock_name);
	printf("Enter number of shares ");
	scanf("%i", &number_of_shares);
	printf("Enter the buy price, current price, fees ");
	scanf("%f %f %f", &buy_price, &current_price, &fees);

	/* Processing & calculations */
	initial_cost = number_of_shares * buy_price;
	current_cost = number_of_shares * current_price;
	profit = current_cost - initial_cost - fees;
	total_profit = profit;

	/* Output */
	printf("\nThe Stock name is    : %s", stock_name);
	printf("\nThe number of shares :  %10i", number_of_shares);
	printf("\nThe buy price is     : $%10.2f", buy_price);
	printf("\nThe current price is : $%10.2f", current_price);
	printf("\nThe fees are         : $%10.2f\n", fees);

	printf("\nThe initial cost is :  $%10.2f", initial_cost);
	printf("\nThe current cost is :  $%10.2f", current_cost);
	printf("\nThe profit is       :  $%10.2f\n", profit);

	/* STOCK 2 */

	/* Input */
	printf("%s            Stock 2\n%s", STAR_LINE, STAR_LINE);
	getchar();
	printf("Enter stock name ");
	gets(stock_name);
	printf("Enter number of shares ");
	scanf("%i", &number_of_shares);
	printf("Enter the buy price, current price, fees ");
	scanf("%f %f %f", &buy_price, &current_price, &fees);
	
	/* Processing & calculations */
	initial_cost = number_of_shares * buy_price;
	current_cost = number_of_shares * current_price;
	profit = current_cost - initial_cost - fees;
	temp_profit = profit;
	total_profit = total_profit + temp_profit;

	/* Output */
	printf("\nThe Stock name is    : %s", stock_name);
	printf("\nThe number of shares :  %10i", number_of_shares);
	printf("\nThe buy price is     : $%10.2f", buy_price);
	printf("\nThe current price is : $%10.2f", current_price);
	printf("\nThe fees are         : $%10.2f\n", fees);

	printf("\nThe initial cost is :  $%10.2f", initial_cost);
	printf("\nThe current cost is :  $%10.2f", current_cost);
	printf("\nThe profit is       :  $%10.2f\n", profit);
	
	/* STOCK 3 */

	/* Input */
	printf("%s            Stock 3\n%s", STAR_LINE, STAR_LINE);
	getchar();
	printf("Enter stock name ");
	gets(stock_name);
	printf("Enter number of shares ");
	scanf("%i", &number_of_shares);
	printf("Enter the buy price, current price, fees ");
	scanf("%f %f %f", &buy_price, &current_price, &fees);
	
	/* Processing & calculations */
	initial_cost = number_of_shares * buy_price;
	current_cost = number_of_shares * current_price;
	profit = current_cost - initial_cost - fees;
	temp_profit = profit;
	total_profit = total_profit + temp_profit;

	/* Output */
	printf("\nThe Stock name is    : %s", stock_name);
	printf("\nThe number of shares :  %10i", number_of_shares);
	printf("\nThe buy price is     : $%10.2f", buy_price);
	printf("\nThe current price is : $%10.2f", current_price);
	printf("\nThe fees are         : $%10.2f\n", fees);

	printf("\nThe initial cost is :  $%10.2f", initial_cost);
	printf("\nThe current cost is :  $%10.2f", current_cost);
	printf("\nThe profit is       :  $%10.2f\n", profit);

	/* STOCK 4 */

	/* Input */
	printf("%s            Stock 4\n%s", STAR_LINE, STAR_LINE);
	getchar();
	printf("Enter stock name ");
	gets(stock_name);
	printf("Enter number of shares ");
	scanf("%i", &number_of_shares);
	printf("Enter the buy price, current price, fees ");
	scanf("%f %f %f", &buy_price, &current_price, &fees);
	
	/* Processing & calculations */
	initial_cost = number_of_shares * buy_price;
	current_cost = number_of_shares * current_price;
	profit = current_cost - initial_cost - fees;
	temp_profit = profit;
	total_profit = total_profit + temp_profit;

	/* Output */
	printf("\nThe Stock name is    : %s", stock_name);
	printf("\nThe number of shares :  %10i", number_of_shares);
	printf("\nThe buy price is     : $%10.2f", buy_price);
	printf("\nThe current price is : $%10.2f", current_price);
	printf("\nThe fees are         : $%10.2f\n", fees);

	printf("\nThe initial cost is :  $%10.2f", initial_cost);
	printf("\nThe current cost is :  $%10.2f", current_cost);
	printf("\nThe profit is       :  $%10.2f\n", profit);

	/* STOCK 5 */

	/* Input */
	printf("%s            Stock 5\n%s", STAR_LINE, STAR_LINE);
	getchar();
	printf("Enter stock name ");
	gets(stock_name);
	printf("Enter number of shares ");
	scanf("%i", &number_of_shares);
	printf("Enter the buy price, current price, fees ");
	scanf("%f %f %f", &buy_price, &current_price, &fees);
	
	/* Processing & calculations */
	initial_cost = number_of_shares * buy_price;
	current_cost = number_of_shares * current_price;
	profit = current_cost - initial_cost - fees;
	temp_profit = profit;
	total_profit = total_profit + temp_profit;

	/* Output */
	printf("\nThe Stock name is    : %s", stock_name);
	printf("\nThe number of shares :  %10i", number_of_shares);
	printf("\nThe buy price is     : $%10.2f", buy_price);
	printf("\nThe current price is : $%10.2f", current_price);
	printf("\nThe fees are         : $%10.2f\n", fees);

	printf("\nThe initial cost is :  $%10.2f", initial_cost);
	printf("\nThe current cost is :  $%10.2f", current_cost);
	printf("\nThe profit is       :  $%10.2f\n", profit);

	printf("\nThe total profit for the 5 stocks is : $%10.2f\n", total_profit);

	return 0;
}

/*
*********************************
            Stock 1
*********************************
Enter stock name IBM CORP 
Enter number of shares 155
Enter the buy price, current price, fees 15.33 13.33 5.00

The Stock name is    : IBM CORP
The number of shares :         155
The buy price is     : $     15.33
The current price is : $     13.33
The fees are         : $      5.00

The initial cost is :  $   2376.15
The current cost is :  $   2066.15
The profit is       :  $   -315.00
*********************************
            Stock 2
*********************************
Enter stock name ORACLE SYS
Enter number of shares 375
Enter the buy price, current price, fees 11.77 12.25 3.50

The Stock name is    : ORACLE SYS
The number of shares :         375
The buy price is     : $     11.77
The current price is : $     12.25
The fees are         : $      3.50

The initial cost is :  $   4413.75
The current cost is :  $   4593.75
The profit is       :  $    176.50
*********************************
            Stock 3
*********************************
Enter stock name SUN MICRO
Enter number of shares 350
Enter the buy price, current price, fees 27.55 35.75 12.25 

The Stock name is    : SUN MICRO
The number of shares :         350
The buy price is     : $     27.55
The current price is : $     35.75
The fees are         : $     12.25

The initial cost is :  $   9642.50
The current cost is :  $  12512.50
The profit is       :  $   2857.75
*********************************
            Stock 4
*********************************
Enter stock name LINKSYS INC
Enter number of shares 85
Enter the buy price, current price, fees 25.35 23.34 6.00

The Stock name is    : LINKSYS INC
The number of shares :          85
The buy price is     : $     25.35
The current price is : $     23.34
The fees are         : $      6.00

The initial cost is :  $   2154.75
The current cost is :  $   1983.90
The profit is       :  $   -176.85
*********************************
            Stock 5
*********************************
Enter stock name CISCO INC
Enter number of shares 50
Enter the buy price, current price, fees 45.36 50.86 1.50

The Stock name is    : CISCO INC
The number of shares :          50
The buy price is     : $     45.36
The current price is : $     50.86
The fees are         : $      1.50

The initial cost is :  $   2268.00
The current cost is :  $   2543.00
The profit is       :  $    273.50

The total profit for the 5 stocks is : $   2815.90
*/
