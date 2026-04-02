#include<stdio.h>

int main()
{
	int basesalary, HRA, DA, TA;
	
	
	printf("enter the base salary: ");
	scanf("%d", &basesalary);
	
	printf("enter the HRA: ");
	scanf("%d", &HRA);
	
	printf("enter the DA: ");
	scanf("%d", &DA);
	
	printf("enter the TA: ");
	scanf("%d", &TA);
	
	printf("\n*--------------------------------*");
	printf("\n|                                |");
	printf("\n|  Your Gross Salaru: %d        |", basesalary+HRA+DA+TA);
	printf("\n|                                |");
	printf("\n*--------------------------------*");
}
/*
		enter the base salary: 100
		enter the HRA: 10
		enter the DA: 5
		enter the TA: 8
		
		*--------------------------------*
		|                                |
		|  Your Gross Salaru: 123        |
		|                                |
		*--------------------------------*
*/