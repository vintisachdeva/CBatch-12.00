// sum of digits --> 123  --> 1 + 2 + 3 -> 6
#include<stdio.h>
#include<conio.h>

void main(){

	int userChoice, rem, sum = 0;
	clrscr();

	printf("Enter your number = ");
	scanf("%d", &userChoice);	// 123

	while(userChoice>0){

		rem = userChoice%10;
		sum = sum + rem;
		userChoice = userChoice / 10;

	}
	printf("Sum of Digist is = %d\n", sum);
	getch();
}

