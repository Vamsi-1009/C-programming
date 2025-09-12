/*step-1: start
step-2: print "To compare three numbers.\n"
step-3: print "Enter the first number: "
step-4: read num1
step-5: print "Enter the second number: "
step-6: read num2
step-7: print "Enter the third number: "
step-8: read num3
step-9: greatest = num1
step-10: if num2 > greatest
           greatest = num2
step-11: if num3 > greatest
           greatest = num3
step-12: print "The bigger number of " + num1 + ", " + num2 + " and " + num3 + " is " + greatest + "."
step-13: stop
*/

#include<stdio.h>

int main()
{
    int num1, num2, num3, greatest;

    printf("To compare three numbers.\n");
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);
    printf("Enter the third number: ");
    scanf("%i", &num3);

    greatest = num1;
    if (num2 > greatest)
    {
        greatest = num2;
    }
    if (num3 > greatest)
    {
        greatest = num3;
    }
    printf("The bigger number of %i, %i and %i is %i.", num1, num2,num3,greatest);    

    return 0;
}