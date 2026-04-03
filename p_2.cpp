#include<stdio.h>

int main()
{
	int marks,grade;
	printf("Enter your marks:");
	scanf("%d",&marks);
	marks>85 
		? (grade='A') 
		: (marks>70 ? (grade='B') : (marks>50 ? (grade='C') : (marks>35 ? (grade='D') : (grade='F'))));
	switch(grade){
		case 'A':
			printf("Grade A.");
			printf("\nExellent work!");
			break;
		case 'B':
			printf("Grade B.");
			printf("\nWell done!");
			break;
		case 'C':
			printf("Grade C.");
			printf("\nGood job!");
			break;
		case 'D':
			printf("Grade D.");
			printf("\nYou passed,but you could do better!");
			break;
		default:
			printf("Grade F.");
			printf("\nsorry,you failed.");				
	}
	if(marks<35){
		printf("\nPlease try again next time.");
	}else{
		printf("\nCongratulation! \nYou are eligible for the next level.");
	}
}
/*
	output:

	1.Enter your marks:92
	Grade A.
	Exellent work!
	Congratulation!
	You are eligible for the next level.

	2. Enter your marks:34
	Grade F.
	sorry,you failed.
	Please try again next time.

	3. Enter your marks:71
	Grade B.
	Well done!
	Congratulation!
	You are eligible for the next level.
*/