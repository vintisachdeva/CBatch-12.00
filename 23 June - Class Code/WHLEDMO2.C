#include<stdio.h>
#include<conio.h>

void main(){
	// table print --> table --> user --> 5 table
	int userChoice, i = 1;
	clrscr();
	printf("Enter your number = ");
	scanf("%d", &userChoice); // 2

	while(i<=10){
		printf("%d X %d = %d\n", userChoice, i, (userChoice*i));
		i++;
	}
	getch();
}