/*
step-1: start
step-2: print "To compare two numbers.\n"
step-3: print "Enter the first: "
step-4: read count1
step-5: print "Enter the second number: "
step-6: read count2
step-7: if count1 > count2
          print count1 + " is bigger than " + count2
step-8: if count1 < count2
          print count2 + " is bigger than " + count1
step-9: stop
*/

#include<stdio.h>

int main()
{
    int num1,num2;

    printf("To compare two numbers.\n");
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("%i is bigger than %i", num1, num2);
    }
     if (num1 < num2)
    {
         printf("%i is bigger than %i", num2, num1);
    }
    
    return 0;
}
