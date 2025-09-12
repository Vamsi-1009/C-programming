/*
step-1: start
step-2: print "to add two numbers."
step-3: print "enter the first number: "
step-4: read num1
step-5: print "enter the second number: "
step-6: read num2
step-7: sum = num1 + num2
step-8: print "the sum of " + num1 + " and " + num2 + " is " + sum + "."
step-9: stop
*/

#include<stdio.h>

int main()

{
	int num1, num2, num;

	printf("To add two numbers.\n");
	printf("Enter the first number: ");
	scanf("%i", &num1);
	printf("Enter the second number: ");
	scanf("%i", &num2);
	sum = num1 + num2;
	printf("The sum of %i and %i is %i.", num1, num2, sum);


	return 0;

}
