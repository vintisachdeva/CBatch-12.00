/*
	1                      1              54321
	12                     22             4321     row = 5  to 1
	123                    333            321      colu = row to 1

	1234                   4444           21       print -> col
	12345                  55555          1

*/

void main(){

	   int row, column;

	   clrscr();

	   for(row = 5; row>=1; row--) // row = 2<=5
	   {
		for(column= row; column >=1; column--) // col= 1<=5
		{
		    printf("%d", column);

		}
		printf("\n");
	   }

	/*   for(row = 1; row<=5; row++) // row = 2<=5
	   {
		for(column= 1; column <=row; column++) // col= 1<=5
		{
		    printf("%d", column);

		}
		printf("\n");
	   }
	  */
	   getch();
}