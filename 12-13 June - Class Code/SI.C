// Header File --=> stdio.h --> printf() , conio.h --> getch(), clrscr()

#include<stdio.h>
#include<conio.h>

void main(){

	// si = principal * rate * time / 100
	int principal = 3000, rate = 3, time = 2, si;
	clrscr();

	//  = 180
	si = principal * rate * time / 100;  //si = 180

	printf("Simple Interest  = %d", si);

	getch();
}
