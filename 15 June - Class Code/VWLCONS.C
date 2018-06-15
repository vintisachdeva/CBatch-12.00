void main(){
	char userChoice;
	clrscr();

	printf("Enter your character = ");
	scanf("%c", &userChoice);   //A

	// 'a' == 'a' , e, i, o, u
	// ASCII code --> A-Z  --> 65 - 90
	// a-z --> 97-122
	    // 'A'-->65 == 'a'--> 97
	if(userChoice == 'a'|| userChoice == 'A'  || userChoice == 'e' || userChoice == 'i'
	|| userChoice == 'o' || userChoice == 'u') {
		printf("Vowel");

	} else{
		printf("Consonant");
	}

	getch();

}