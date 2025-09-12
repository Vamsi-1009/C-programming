/*
step1: start
step2: print "to multiply three numbers.\n"
step3: print "enter the first number: "
step4: read number1
step5: print "enter the second number: "
step6: read number2
step7: print "enter the third number: "
step8: read number3
step9: product = number1 * number2 * number3
step10: print "the product of  " + number1 + ", " + number2 + " and " + number3 + " is " + product + "."
step11: stop
*/

#include<stdio.h>

int main()
{
	int number1, number2, number3, product;

	printf("To multiply three numbers.\n");
	printf("Enter the first number: ");
	scanf("%i", &number1);
	printf("Enter the second number: ");
	scanf("%i", &number2);
	printf("Enter the third number: ");
	scanf("%i", &number3);
	product = number1*number2*number3;
	printf("the product of %i, %i and %i is %i.", number1, number2, number3, product);




	return 0;
}
