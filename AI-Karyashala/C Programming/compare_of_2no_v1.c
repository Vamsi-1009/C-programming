/*
step-1: start    
step-2: print "To compare two numbers.\n"
step-3: print "Enter the first: "
step-4: read count1
step-5: print "Enter the second number: "
step-6: read count2
step-7: compare = " is bigger than "
step-8: if count1 > count2
          print count1 + " " + compare + " " + count2
step-9: if count1 < count2
          print count2 + " " + compare + " " + count1
step-10:stop
*/

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("To compare two numbers.\n");
    printf("Enter the first number: ");
    scanf("%i", &num1);
    printf("Enter the second number: ");
    scanf("%i", &num2);
    

    char compare[] = "is bigger than";
    if (num1 > num2)
    {
        printf("%i %s %i", num1, compare, num2);
    }
     if (num1 < num2)
    {
         printf("%i %s %i", num2, compare, num1);
    }



    return 0;
}
