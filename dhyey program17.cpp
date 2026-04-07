#include<stdio.h>

int main()
{
	int r;
	const float pi=3.14;
	
	printf("enter radius: ");
	scanf("%d", &r);
	
	printf("area is: %f ", pi*r*r);
}
/*
		enter radius: 7
		area is: 153.860016
*/