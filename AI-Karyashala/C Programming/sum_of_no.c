/*
step-1: start
step-2: print "to add two numbers."
step-3: print "enter the first number: "
step-4: read Num1
step-5: print "enter the second number: "
step-6: read Num2
step-7: Sum = Num1 + Num2
step-8: print "the sum of " + Num1 + " and " + Num2 + " is " + Sum + "."
step-9: stop
*/

#include<stdio.h>

int main()

{
	int Num1, Num2, Sum;

	printf("To add two numbers.\n");
	printf("Enter the first number: ");
	scanf("%i", &Num1);
	printf("Enter the second number: ");
	scanf("%i", &Num2);
	Sum = Num1 + Num2;
	printf("The sum of %i and %i is %i.", Num1, Num2, Sum);


	return 0;

}
