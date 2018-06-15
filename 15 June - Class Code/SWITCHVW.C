void main(){
	char userChoice;
	clrscr();
	printf("Enter a character = ");
	scanf("%c", &userChoice);

	// 'A'--> 65>=65  && 65<=90
	if(userChoice>=65 && userChoice<=90){
			     // 'A'--> 65 + 32 --> 97 --> a
		userChoice = userChoice + 32; // A--> 65 + 32 --> 97(a)
	}

	//printf("%c\n", 'A' + 1);  // 'B'

	switch(userChoice){
		// char --> A(65) --Z (90) --> convert small character--> 97-122

		case 'a':
		//case 'A':
		case 'e':  // 'a' == 'e'
		case 'i':
		case 'o':
		case 'u':
			printf("Vowel");
		break;

		default:
			printf("consonant");
			//break;

	}

	printf("\nTerminated from switch");
	getch();

}