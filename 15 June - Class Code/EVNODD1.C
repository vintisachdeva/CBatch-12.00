void main(){
	int userChoice;
	clrscr();

	printf("Enter your number = ");
	scanf("%d", &userChoice); // & --> addressOf

	// 50 /2 =  quotient --> 50 % 2 == 0 remainder
	if(userChoice % 2 == 0)
	// Relational Operator --> true or false
		// > --> Relational Operator --> true or false
		// >, <, >=, <=, ==, !=

		printf("Even");
	else
		printf("Odd");

	getch();

}