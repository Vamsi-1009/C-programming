/*step1: start    
step2: print "To compare two numbers.\n"
step3: print "Enter the first: "
step4: read Count1
step5: print "Enter the second number: "
step6: read Count2
step7: big = Count1;
step8: if big < count2
       big = count2;
step9 : print "The bigger no is " + big;
step10: stop*/

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