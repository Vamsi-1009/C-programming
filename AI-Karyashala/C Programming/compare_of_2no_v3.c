/*step-1: start
step-2: print "To compare two numbers.\n"
step-3: print "Enter the first number: "
step-4: read count1
step-5: print "Enter the second number: "
step-6: read count2
step-7: if count1 < count2
          temp = count1
          count1 = count2
          count2 = temp
step-8: print "The bigger number is: " + count1
step-9: stop

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