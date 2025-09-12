/*
step-1: start
step-2: print "To compare two numbers.\n"
step-3: print "Enter the first: "
step-4: read count1
step-5: print "Enter the second number: "
step-6: read count2
step-7: big = count1
step-8: if big < count2
          big = count2
step-9: print "The bigger no is " + big
step-10: stop
*/

#include<stdio.h>

int main()
{
       int count1, count2, big;

       printf("To compare two numbers.\n");
       printf("Enter the first number: ");
       scanf("%i", &count1);
       printf("Enter the second number: ");
       scanf("%i", &count2);

       big = count1;
       if (big < count2)
       {
              big = count2;
       }
       printf("The bigger number is %i", big);

       return 0;
}