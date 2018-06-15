void main(){
	// user input --> 5, n -> 1to10, result = userinput*n

	int num, i = 1, result;
	clrscr();
	printf("\nEnter your number = ");
	scanf("%d", &num);

	while(i<=10){
		// 5 X 3 = 5
		//result = num * i;   // 5 * 3 = result
		printf("%d X %d = %d\n",num,i, num * i);
		i++;
	}
	getch();

}