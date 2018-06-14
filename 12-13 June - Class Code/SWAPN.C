void main(){

	int first = 45;
	int second = 55, temp = 0; // garbage value
	clrscr();
	// swap --> use a third variable or without using third variable
	// with third variable

	/* temp = first;	// temp  = 10 first = 10
	first = second;	// second = 5 first = 5
	second = temp;
	*/

	// without using third variable
	first = first + second;    // 10 + 5 =first = 15
	second = first - second;   // 15 - 5 = second = 10
	first = first - second;	// 15 - 10 = first = 5

	printf("First  = %d\n", first);
	printf("Second = %d", second);

	getch();

}