/*step1: start    
step2: print "To compare two numbers.\n"
step3: print "Enter the first: "
step4: read Count1
step5: print "Enter the second number: "
step6: read Count2
step7: Compare = " is bigger than "
step8: if Count1 > Count2
          print Count1 + " " + Compare + " " + Count2
step9: if Count1 < Count2
          print Count2 + " " + Compare + " " + Count1
step10:stop
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
