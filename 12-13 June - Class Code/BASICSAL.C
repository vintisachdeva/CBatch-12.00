#include<stdio.h>
#include<conio.h>
void main(){
	// basic salay, net salary, hra, da, ta, pf, allowance(optional)
	float basicSal = 5000, netSal, hra, da, ta, pf= 1400, allow;
	// hra --> 30 %
	// da --> 20 %
	// ta --> 10 %
	clrscr();

	// 2 bytes --> 16 bits --> -128 to +127

	hra = (30 * basicSal)/100;    //without brackets 1st--> divide 2nd -->multiply
	// (30 * 5000) / 100  --> 150000/100 -->hra --> 1500
	da = (20 * basicSal)/100; // (20 * 5000) --> 100000/100 --> 1000
	ta = (10 * basicSal)/100; // (10 * 5000) --> 50000/100 --> 500

	// netsalary --> basic salary + allowances(hra + da + ta) - pf
	allow = hra + da + ta;

	netSal = (basicSal + hra + da + ta) - pf;  // 5000 + 1500 + 1000 + 500
				// 8000 - 1400 --> 6600

	printf("Net Salary is = %f", netSal);

	getch();

}