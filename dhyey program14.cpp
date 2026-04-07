#include<stdio.h>

int main()
{
	int a;
	int b;
	
	printf("enter the a: ");
	scanf("%d", &a);
	
	printf("enter the b: ");
	scanf("%d", &b);
	
	printf("\n --------------");
	printf("\n|              |");
	printf("\n| %d X %d = %d   |", a,b,a*b);
	printf("\n|              |");
	printf("\n --------------");	
}
/*
		enter the a: 4
		enter the b: 4

		 --------------
		|              |
		| 4 X 4 = 16   |
		|              |
		 --------------
		 
		 sir this "|" yes this "|" will cenge the location its own by own according to multiplication so that was not my fault ok
*/