/********************************************************/
/* Name: Dane Hobrecht                                  */
/* Student ID: 1103521                                  */
/* Date: 03/15/22                                       */
/* Homework 3 Program Set 1                             */
/* This program calculates salary raises for employees. */
/********************************************************/

#include <stdio.h>

// Calculates & outputs salary information.
void calculate(double salary) {
	double rate, raise, new_salary;
	double total_salary, total_raise, total_new_salary;
	if (salary != -1) {
		if (salary > 0 && salary < 30000) {
			rate = 0.07;
		} else if (salary >= 30000 && salary < 40000) {
			rate = 0.055;
		} else if (salary > 40000) {
			rate = 0.04;
		}
		raise = salary * rate;
		new_salary = salary + raise;
		total_salary += salary;
		total_raise += raise;
		total_new_salary += new_salary;
		printf("                    %10.2f %10.2f %10.2f %10.2f\n", salary, (rate * 100), raise, new_salary);
	} else {
		printf("-----------------------------------------------------------------\n");
		printf("Total               %10.2f            %10.2f %10.2f\n", total_salary, total_raise, total_new_salary);
	}
}

int main() {
	printf("                      Salary         Rate    Raise     New Salary\n");
	printf("-----------------------------------------------------------------\n");
	int salary;
	while (salary != -1) {
		printf("Salary : ");
		scanf("%i", &salary);
		calculate(salary);
	}
	return 0;
}

/*
Test Run 1
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 25000
                      25000.00       7.00    1750.00   26750.00
Salary : 30000
                      30000.00       5.50    1650.00   31650.00
Salary : 35000
                      35000.00       5.50    1925.00   36925.00
Salary : 40000
                      40000.00       5.50    2200.00   42200.00
Salary : -1
-----------------------------------------------------------------
Total                130000.00               7525.00  137525.00

Test Run 2
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : -1
-----------------------------------------------------------------
Total                     0.00                  0.00       0.00

Test Run 3
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 23000
                      23000.00       7.00    1610.00   24610.00
Salary : 54000
                      54000.00       4.00    2160.00   56160.00
Salary : -1
-----------------------------------------------------------------
Total                 77000.00               3770.00   80770.00

Test Run 4
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 200000
                     200000.00       4.00    8000.00  208000.00
Salary : -1
-----------------------------------------------------------------
Total                200000.00               8000.00  208000.00

Test Run 5
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 4500
                       4500.00       7.00     315.00    4815.00
Salary : 90341 
                      90341.00       4.00    3613.64   93954.64
Salary : 54000
                      54000.00       4.00    2160.00   56160.00
Salary : 32120
                      32120.00       5.50    1766.60   33886.60
Salary : -1
-----------------------------------------------------------------
Total                180961.00               7855.24  188816.24
*/
