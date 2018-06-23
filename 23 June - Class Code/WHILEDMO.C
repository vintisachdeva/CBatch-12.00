#include<stdio.h>
#include<conio.h>
void main(){
	int i = 1;
	clrscr();

	while(i<=9)// odd no's --> 1,3,5,7,9
	{
		printf("%d\n",i);
		i= i+2; // 1+2--> 3+2-->5+2--> 7+2-->9+2=11
	}
	getch();
}