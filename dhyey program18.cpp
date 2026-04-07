#include<stdio.h>

int main()
{
    int b;
    int h;
    
    printf("enter the base: ", b);
    scanf("%d", &b);
    
    printf("enter the height: ", h);
    scanf("%d", &h);
    
    printf("area of triangle is: %d", (b*h)/2);
}
/*
		enter the base: 4
		enter the height: 4
		area of triangle is: 8
*/