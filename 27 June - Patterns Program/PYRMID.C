/*
	*
       ***
      *****

*/

void main(){

	int row, column, space, userChoice;
	clrscr();
	printf("Enter the req. line = ");
	scanf("%d", &userChoice);	// 5

	for(row = 1; row<=userChoice; row++){   // 2<=5

		for(space= userChoice; space>=row; space--){ // 5>=2--> 5,4,3,2
		   printf(" ");                                 // 5 spaces
		}                                               // 5 spaces
		// 1,3,5,7,9, userChoice       1<=1
		for(column = 1; column <= (2 * row - 1); column++)
		{                               //*
			printf("*");
		}
	       printf("\n");
	}

	getch();

}