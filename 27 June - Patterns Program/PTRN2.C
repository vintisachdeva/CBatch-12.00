/*
	11111      line-->1,5 row , pos-->1,5 col
	22222
	33333
	44444       // line --> same --> row
	55555       // line --> changed --> column

	12345
	12345
	12345
	12345
	12345

*/

void main(){

	   int row, column;
	   clrscr();

	   for(row = 1; row<=5; row++)
	   {
		for(column= 1; column <=5; column++)
		{
		    printf("%d", column);
		}
		printf("\n");
	   }

	   getch();
}