/*
	AAAAA    --> A
	BBBBB
	CCCCC
	DDDDD
	EEEEE

	ABCDE
	ABCDE
	ABCDE
	ABCDE
	ABCDE

	A-E --> 65-69

	A-Z --> 65-90
	a-z --> 97-122
*/

void main(){

	   int row, column;

	   clrscr();

	   //printf("%c", 'A'+1);    // Characters --> ASCII --> 65 + 1 = 66
		   // 65
	   for(row = 'A'; row<='E'; row++) // row = 2<=5
	   {
		for(column= 'A'; column <='E'; column++) // col= 1<=5
		{                // 65 --> char --> A
		    printf("%c", column); // BBBBB
		}
		printf("\n");
	   }


	   /*int row, column, temp = 65;

	   clrscr();

	   for(row = 1; row<=5; row++) // row = 2<=5
	   {
		for(column= 1; column <=5; column++) // col= 1<=5
		{
		    printf("%c", temp); // BBBBB
		}
		temp++;// 66
		printf("\n");
	   }
	   */

	   getch();
}