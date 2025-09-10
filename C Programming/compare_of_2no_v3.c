/*step1: start
step2: print "To compare two numbers.\n"
step3: print "Enter the first number: "
step4: read Count1
step5: print "Enter the second number: "
step6: read Count2
step7: if Count1 < Count2
            temp = Count1
            Count1 = Count2
            Count2 = temp
step8: print "The bigger number is: " + Count1
step9: stop
*/

#include<stdio.h>

int main()
{
       int number1, number2, temp;

       printf("To compare two numbers.\n");
       printf("Enter the first number: ");
       scanf("%i", &number1);
       printf("Enter the second number: ");
       scanf("%i", &number2);

       if (number1 < number2)
       {
              temp = number1;
              number1 = number2;
              number2 = temp;
       }
       printf("The bigger number is %i", number1);

       return 0;
}