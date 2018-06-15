#include<stdio.h> // printf, scanf
#include<conio.h> // clrscr, getch

void main(){

	int first, second, third;
	clrscr();

	printf("Enter first value = ");
	scanf("%d", &first);


	printf("\nEnter second value = ");
	scanf("%d", &second);


	printf("\nEnter third value = ");
	scanf("%d", &third);
	// 1000, 500, 90
	    // 100 > 500--> false && 100>90 --> true
	if((first > second) && (first>third))  // first = 90, second = 50, third= 10
	{
		printf("\nFirst Number is greater");

	}else if(second> third) // 500 > 90
	{
		printf("\nSecond Number is greater");
	}else{
		printf("\nThird Number is greater");
	}

	getch();

}


