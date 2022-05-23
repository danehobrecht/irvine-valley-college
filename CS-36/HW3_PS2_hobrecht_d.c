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
	int salaries, salary;
	printf("How many salaries do you want to enter? ");
	scanf("%i", &salaries);
	printf("\n                      Salary         Rate    Raise     New Salary\n");
	printf("-----------------------------------------------------------------\n");
	for (int i = 0; i < salaries; i++){
		printf("Salary : ");
		scanf("%i", &salary);
		calculate(salary);
	}
	calculate(-1);
	return 0;
}

/*
Test Run 1
How many salaries do you want to enter? 4

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
-----------------------------------------------------------------
Total                130000.00               7525.00  137525.00

Test Run 2
How many salaries do you want to enter? 3

                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 34000
                      34000.00       5.50    1870.00   35870.00
Salary : 68000
                      68000.00       4.00    2720.00   70720.00
Salary : 97000
                      97000.00       4.00    3880.00  100880.00
-----------------------------------------------------------------
Total                199000.00               8470.00  207470.00

Test Run 3
How many salaries do you want to enter? 5

                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary : 56000
                      56000.00       4.00    2240.00   58240.00
Salary : 36900
                      36900.00       5.50    2029.50   38929.50
Salary : 54050
                      54050.00       4.00    2162.00   56212.00
Salary : 46000
                      46000.00       4.00    1840.00   47840.00
Salary : 23000
                      23000.00       7.00    1610.00   24610.00
-----------------------------------------------------------------
Total                215950.00               9881.50  225831.50
*/
