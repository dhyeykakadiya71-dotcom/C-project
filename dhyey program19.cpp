#include<stdio.h>

int main()
{
	int p, r, n;
	
	printf("enter principal amount: ");
	scanf("%d", &p);
	
	printf("enter rate: ");
	scanf("%d", &r);
	
	printf("enter time in month: ");
	scanf("%d", &n);
	
	printf("simpal interest: %d ", (p*r*n)/100);
}
/*
		enter principal amount: 10000
		enter rate: 5
		enter time in month: 18
		simpal interest: 9000
*/