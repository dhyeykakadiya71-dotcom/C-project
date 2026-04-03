#include<stdio.h>

int main()
{
	float c;
	
	printf("enter the c: ");
	scanf("%f", &c);
	
	printf("\n*--------------------------------*");
	printf("\n|                                |");
	printf("\n|  you farenheit: %.1f          |", (9.0/5.0*c)+32);
	printf("\n|                                |");
	printf("\n*--------------------------------*");
}
/*
		output:
		enter the c: 38
		
		*--------------------------------*
		|                                |
		|  you farenheit: 100.4          |
		|                                |
		*--------------------------------*
*/
