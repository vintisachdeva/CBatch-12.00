#include<stdio.h>
#include<conio.h>

void main(){
	// addition
	int firstNo, secondNo, result;
	clrscr();

	printf("\nEnter your first value = ");
	scanf("%d", &firstNo);// --> Address --> & --> addressOf

	printf("\nEnter your second value = ");
	scanf("%d", &secondNo); // --> Address --> & --> addressOf

	result = firstNo + secondNo;

	printf("Result is = %d", result);
	getch();
}