#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 6

struct Employee {
	// Declares struct data members
	char name[30];
	float sal, rate, raise, newSal, avg;
};

// Function prototypes
void load(struct Employee e[], int n);
void ARate(struct Employee e[], int n);
void calcRaise(struct Employee e[], int n);
void sort(struct Employee e[], int n);
void total(struct Employee e[], int n, float *ts, float *tr, float *tn);
void title();
void print(struct Employee e[], int n);
void printTotals(float ts,float tr, float tn);
void savetext(struct Employee e[], int n);
void getText(struct Employee e[], int n);
void savebn(struct Employee e[], int n);
void getbn(struct Employee e[], int n);

void load(struct Employee e[], int n) {
	// Allows the user to enter the employee’s name and salary
	int i;
	for (i = 0; i < n; i++) {
		printf("Enter the employee's name: ");
		scanf("%s", &e[i].name);
		printf("Enter salary: ");
		scanf("%f", &e[i].sal);
		e[i].avg = (e[i].sal + e[i].rate + e[i].raise + e[i].newSal) / (float)4;
	}
}

void ARate(struct Employee e[], int n) {
	// Assign each employee's rate to the struct’s rate data member here by
	// checking salary range
	int i;
	for (i = 0; i < n; i++) {
		if (e[i].sal >= 0.00 && e[i].sal < 30000.00) {
			e[i].rate = 7.00;
		} if (e[i].sal >= 30000.00 && e[i].sal <= 40000.00) {
			e[i].rate = 5.50;
		} if (e[i].sal >= 40000.00) {
			e[i].rate = 4.00;
		}
	}
}

void calcRaise(struct Employee e[], int n) {
	// Calculate & store the raise and new salary for each employee into the
	// struct’s raise and new salary data members
	int i;
	for (i = 0; i < n; i++) {
		e[i].raise = e[i].sal * e[i].rate / 100;
		e[i].newSal = e[i].sal + e[i].raise;
	}
}

void sort(struct Employee e[], int n) {
	struct Employee t;
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (strcmp(e[i].name, e[j].name) < 0) {
				t = e[j];
				e[j] = e[i];
				e[i] = t;
			}
		}
	}
}

void total(struct Employee e[], int n, float *ts, float *tr, float *tn) {
	// Sums the raises & new salaries of all 6 employees
	*ts = 0.0;
	*tr = 0.0;
	*tn = 0.0;
	int i;
	for (i = 0; i < n; i++) {
		*ts += e[i].sal;
		*tr += e[i].raise;
		*tn += e[i].newSal;
	}
}

void title()
{
	printf("\t\t\tCalculation of Salary Raises\n\n");

	printf("Employee\t");     printf("Salary\t\t"); printf("Rate  \t"); printf("  Raise\t\t"); printf("New Salary\n\n");
}


void print(struct Employee e[], int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%s\t\t", e[i].name); printf("%10.2f\t", e[i].sal); printf("%4.2f\t", e[i].rate);
		printf("%8.2f\t", e[i].raise); printf("%8.2f\t\n", e[i].newSal);
	}
}


void printTotals(float ts,float tr, float tn)
{
	printf("Total\t\t"); printf("%10.2f\t\t", ts); printf("%8.2f\t", tr); printf("%8.2f\n\n", tn);
}

void savetext(struct Employee e[], int n) {
	// Saves the struct to "employees.txt"
	FILE *f;
	f = fopen("employees.txt", "w");
	int i;
	for (i = 0; i < n; i++) {
		fprintf(f, "%s %f %f %f %f\n", e[i].name, e[i].sal, e[i].rate, e[i].raise, e[i].newSal);
	}
	fclose(f);
}

void getText(struct Employee e[], int n) {
	// Retrieves data from "employees.txt"
	FILE *f;
	f = fopen("employees.txt", "r");
	int i;
	for (i = 0; i < n; i++) {
		fscanf(f, "%s %f %f %f %f\n", &e[i].name, &e[i].sal, &e[i].rate, &e[i].raise, &e[i].newSal);
	}
	fclose(f);
}

void savebn(struct Employee e[], int n) {
	// Saves the struct to "employees.bin"
	FILE *f;
	f = fopen("employees.bin", "wb");
	fwrite(&e[0], sizeof(e[0]), n, f);
	fclose(f);
}

void getbn(struct Employee e[], int n) {
	// Retrieve data from "employees.bin"
	FILE *f;
	f = fopen("employees.bin", "rb");
	fread(&e[0], sizeof(e[1]), n, f);
	fclose(f);
}

int main()
{
	//declaration of variables
	struct Employee e[SIZE];
	float ts,tr,tn;
	
	//load data into struct, calculate raises, salaries and new salaries and print the //original array of struct
	load(e,SIZE);
	ARate(e,SIZE);
	calcRaise(e,SIZE);
    total(e,SIZE,&ts,&tr,&tn);
	printf("Original Array of Structure before Sorting\n\n");
	title();
	print(e,SIZE);
	printTotals(ts,tr,tn);

	//sort the struct of array and print the sorted struct of array
	sort(e,SIZE);
	total(e,SIZE,&ts,&tr,&tn);
	printf("Array of Structure after Sorting\n\n");
	title();
	print(e,SIZE);
	printTotals(ts,tr,tn);

	//**************Section for text files***************** 
	printf("\n\n");
	printf("From Save Text file\n\n");
	title();
	
	//save the struct of array to a text file
	savetext(e,SIZE);
	
	//retrieve the text file and print the data
	getText(e,SIZE);
	print(e,SIZE);
	total(e,SIZE,&ts,&tr,&tn);
	printTotals(ts,tr,tn);
	
	//**************Section for binary files*****************
	printf("\n\n");
	printf("From Save Binary file\n\n");
	title();
	
	//save struct of array to a binary file
	savebn(e,SIZE);
	
	//retrieve data from binary file and print the data
	getbn(e,SIZE);
	print(e,SIZE);
	total(e,SIZE,&ts,&tr,&tn);
	printTotals(ts,tr,tn);
	
	return 0;
}

/*
Test Run 1
Enter the employee's name: Susan
Enter salary: 25000
Enter the employee's name: Jim
Enter salary: 30000
Enter the employee's name: Gloria
Enter salary: 35000
Enter the employee's name: Ros
Enter salary: 40000
Enter the employee's name: Ben
Enter salary: 40001
Enter the employee's name: Tim
Enter salary: 45000
Original Array of Structure before Sorting

			Calculation of Salary Raises

Employee	Salary		Rate  	  Raise		New Salary

Susan		  25000.00	7.00	 1750.00	26750.00	
Jim		  30000.00	5.50	 1650.00	31650.00	
Gloria		  35000.00	5.50	 1925.00	36925.00	
Ros		  40000.00	4.00	 1600.00	41600.00	
Ben		  40001.00	4.00	 1600.04	41601.04	
Tim		  45000.00	4.00	 1800.00	46800.00	
Total		 215001.00		10325.04	225326.03

Array of Structure after Sorting

			Calculation of Salary Raises

Employee	Salary		Rate  	  Raise		New Salary

Ben		  40001.00	4.00	 1600.04	41601.04	
Gloria		  35000.00	5.50	 1925.00	36925.00	
Jim		  30000.00	5.50	 1650.00	31650.00	
Ros		  40000.00	4.00	 1600.00	41600.00	
Susan		  25000.00	7.00	 1750.00	26750.00	
Tim		  45000.00	4.00	 1800.00	46800.00	
Total		 215001.00		10325.04	225326.03



From Save Text file

			Calculation of Salary Raises

Employee	Salary		Rate  	  Raise		New Salary

Ben		  40001.00	4.00	 1600.04	41601.04	
Gloria		  35000.00	5.50	 1925.00	36925.00	
Jim		  30000.00	5.50	 1650.00	31650.00	
Ros		  40000.00	4.00	 1600.00	41600.00	
Susan		  25000.00	7.00	 1750.00	26750.00	
Tim		  45000.00	4.00	 1800.00	46800.00	
Total		 215001.00		10325.04	225326.03



From Save Binary file

			Calculation of Salary Raises

Employee	Salary		Rate  	  Raise		New Salary

Ben		  40001.00	4.00	 1600.04	41601.04	
Gloria		  35000.00	5.50	 1925.00	36925.00	
Jim		  30000.00	5.50	 1650.00	31650.00	
Ros		  40000.00	4.00	 1600.00	41600.00	
Susan		  25000.00	7.00	 1750.00	26750.00	
Tim		  45000.00	4.00	 1800.00	46800.00	
Total		 215001.00		10325.04	225326.03
*/
