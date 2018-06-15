void main(){

	float percentage;
	clrscr();

	printf("Enter a percentage between 1-100 = ");
	scanf("%f", &percentage);

	if(percentage>=90 && percentage<=100){
		printf("Grade A");
	}else if(percentage>=70 && percentage<=89){
		printf("Grade B");

	}else if(percentage>=50 && percentage<=69){
	       printf("Grade C");
	}else if(percentage>=1 && percentage<=49){
		printf("Grade D");
	}else{
		 printf("Only Percentage between 1-100 is allowed");
	}
	getch();

}