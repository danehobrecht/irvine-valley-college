/********************************************************/
/* Name: Dane Hobrecht                                  */
/* Student ID: 1103521                                  */
/* Date: 04/17/22                                       */
/* Homework 4 Program Set 1                             */
/* This program calculates salary raises for employees. */
/********************************************************/

#include <stdio.h>

// Outputs salary statistics.
void output(double salary, double rate, double raise, double new_salary) {
	printf("\nSalary\t\t  :%12.2lf", salary);
	printf("\nRate\t\t  :%11.1lf%%", (rate * 100));
	printf("\nRaise\t\t  :%12.2lf", raise);
	printf("\nNew salary\t  :%12.2lf\n\n", new_salary);
}

// Outputs total salary statistics.
void total(double total_salary, double total_raise, double total_new_salary) {
	printf("\nTotal salary\t  :%12.2lf", total_salary);
	printf("\nTotal raise\t  :%12.2lf", total_raise);
	printf("\nTotal New Salary  :%12.2lf\n", total_new_salary);
}

// Calculates salary statistics.
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
		output(salary, rate, raise, new_salary);
	} else {
		total(total_salary, total_raise, total_new_salary);
	}
}

// Inputs employee name(s) & salary value(s).
int load() {
	int employees;
	double salary;
	char name[30];
	printf("How many employees : ");
	scanf("%i", &employees);
	for (int i = 0; i < employees; i++) {
		printf("\nEnter the Employee's name: ");
		getchar();
		scanf("%[^\n]s", name);
		printf("Enter salary : ");
		scanf("%lf", &salary);
		printf("\nEmployee's Name   : %s", name);
		calculate(salary);
	}
	calculate(-1);
	return 0;
}

int main() {
	load();
}

/*
Test Run 1
How many employees : 2

Enter the Employee's name: Daisy Yellow
Enter salary : 25000.00

Employee's Name   : Daisy Yellow
Salary		  :    25000.00
Rate		  :        7.0%
Raise		  :     1750.00
New salary	  :    26750.00


Enter the Employee's name: Rose Red
Enter salary : 30000.00

Employee's Name   : Rose Red
Salary		  :    30000.00
Rate		  :        5.5%
Raise		  :     1650.00
New salary	  :    31650.00


Total salary	  :    55000.00
Total raise	  :     3400.00
Total New Salary  :    58400.00

Test Run 2
How many employees : 3

Enter the Employee's name: Periwinkle Pink
Enter salary : 35000.00

Employee's Name   : Periwinkle Pink
Salary		  :    35000.00
Rate		  :        5.5%
Raise		  :     1925.00
New salary	  :    36925.00


Enter the Employee's name: Marigold Orange
Enter salary : 40000.00

Employee's Name   : Marigold Orange
Salary		  :    40000.00
Rate		  :        5.5%
Raise		  :     2200.00
New salary	  :    42200.00


Enter the Employee's name: Iris Blue
Enter salary : 40001.00

Employee's Name   : Iris Blue
Salary		  :    40001.00
Rate		  :        4.0%
Raise		  :     1600.04
New salary	  :    41601.04


Total salary	  :   115001.00
Total raise	  :     5725.04
Total New Salary  :   120726.04

Test Run 3
How many employees : 3 

Enter the Employee's name: Lilacs Purple
Enter salary : 45000.00

Employee's Name   : Lilacs Purple
Salary		  :    45000.00
Rate		  :        4.0%
Raise		  :     1800.00
New salary	  :    46800.00


Enter the Employee's name: Chan Loke
Enter salary : 80000.00

Employee's Name   : Chan Loke
Salary		  :    80000.00
Rate		  :        4.0%
Raise		  :     3200.00
New salary	  :    83200.00


Enter the Employee's name: Dane Hobrecht
Enter salary : 75000.00

Employee's Name   : Dane Hobrecht
Salary		  :    75000.00
Rate		  :        4.0%
Raise		  :     3000.00
New salary	  :    78000.00


Total salary	  :   200000.00
Total raise	  :     8000.00
Total New Salary  :   208000.00

Test Run 4
How many employees : 3

Enter the Employee's name: Gary Green
Enter salary : 10000.00

Employee's Name   : Gary Green
Salary		  :    10000.00
Rate		  :        7.0%
Raise		  :      700.00
New salary	  :    10700.00


Enter the Employee's name: Turtle Turqoise
Enter salary : 5000.00

Employee's Name   : Turtle Turqoise
Salary		  :     5000.00
Rate		  :        7.0%
Raise		  :      350.00
New salary	  :     5350.00


Enter the Employee's name: Bongo Brown            
Enter salary : 15000.00

Employee's Name   : Bongo Brown
Salary		  :    15000.00
Rate		  :        7.0%
Raise		  :     1050.00
New salary	  :    16050.00


Total salary	  :    30000.00
Total raise	  :     2100.00
Total New Salary  :    32100.00

Test Run 5
How many employees : 3

Enter the Employee's name: Willard White
Enter salary : 70000.00

Employee's Name   : Willard White
Salary		  :    70000.00
Rate		  :        4.0%
Raise		  :     2800.00
New salary	  :    72800.00


Enter the Employee's name: Veronica Violet
Enter salary : 67000.00

Employee's Name   : Veronica Violet
Salary		  :    67000.00
Rate		  :        4.0%
Raise		  :     2680.00
New salary	  :    69680.00


Enter the Employee's name: Boring Beige
Enter salary : 13000.00

Employee's Name   : Boring Beige
Salary		  :    13000.00
Rate		  :        7.0%
Raise		  :      910.00
New salary	  :    13910.00


Total salary	  :   150000.00
Total raise	  :     6390.00
Total New Salary  :   156390.00
*/
