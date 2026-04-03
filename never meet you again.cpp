#include<stdio.h>

int main()
{
	float basesalary, grosssalary, HRA, DA, TA;
	
	
	printf("enter the base salary: ");
	scanf("%f", &basesalary);
	
	printf("enter the HRA: ");
	scanf("%f", &HRA);
	
	printf("enter the DA: ");
	scanf("%f", &DA);
	
	printf("enter the TA: ");
	scanf("%f", &TA);
	
	grosssalary=basesalary+HRA/100*basesalary+DA/100*basesalary+TA/100*basesalary;
	
	printf("\n*--------------------------------*");
	printf("\n|                                |");
	printf("\n|  Your Gross Salary: %.1f      |", grosssalary);
	printf("\n|                                |");
	printf("\n*--------------------------------*");
}
/*
		output:
		enter the base salary: 100
		enter the HRA: 10
		enter the DA: 5
		enter the TA: 8
		
		*--------------------------------*
		|                                |
		|  Your Gross Salary: 123.0      |
		|                                |
		*--------------------------------*
*/
