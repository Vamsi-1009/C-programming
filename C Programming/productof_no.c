/*
step1: start
step2: print "to multiply three numbers."
step3: print "enter the first number: "
step4: read Num1
step5: print "enter the second number: "
step6: read Num2
step7: print "enter the third number: "
step8: read Num3
step9: Product = Num1 * Num2 * Num 3
step10: print "the product of  " + Num1 + ", " + Num2 + " and " + Num3 + " is " + Product + "."
step11: stop
*/

#include<stdio.h>

int main()
{
	int Number1, Number2, Number3, Product;

	printf("To multiply three numbers.\n");
	printf("Enter the first number: ");
	scanf("%i", &Number1);
	printf("Enter the second number: ");
	scanf("%i", &Number2);
	printf("Enter the third number: ");
	scanf("%i", &Number3);
	Product = Number1*Number2*Number3;
	printf("the product of %i, %i and %i is %i.", Number1, Number2, Number3, Product);




	return 0;
}
