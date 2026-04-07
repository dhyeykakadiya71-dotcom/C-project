#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("enter c: ");
    scanf("%d", &c);

    if (a < b) {
        if (a < c) {
        	printf("min number is a");
        } else {
            printf("min number is c");
        }
    } else {
        if (b < c) {
            printf("min number is b");;
        } else {
            printf("min number is c");;
        }
    }
}
/*
		Enter a: 3
		Enter b: 1
		enter c: 2
		min number is b
*/