/*step1: start
step2: print "To compae three numbers.\n"
step3: print "Enter the first number: "
step4: read Num1
step5: print "Enter the second number: "
step6: read Num2
step7: print "Enter the third number: "
step8: read Num3
step9: Greatest = Num1
step10: if Num2 > Greatest
          Greatest = Num2
step11: if Num3 > Greatest
           Greatest = Num3
step12: print "The bigger number of " + Num1 + ", " + Num2 + " and " + Num3 + " is " + Greatest + "."
step13: stop*/

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