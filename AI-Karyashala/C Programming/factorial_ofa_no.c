/*step1: start
step2: print "Enter the number to find the factorial: "
step3: read Count
step4: Counter = 1
step5: Multiply = 1
step6: print "The factorial of " + Count + " is "
step7: if Count >= Counter
          Multiply = Multiply * Counter
          Counter = Counter + 1
          goto step7
step8: print Multiply + "."
step9:stop*/



#include<stdio.h>

int main()
{
    int count, counter, multiply;

    printf("Enter the number to find the factorial: ");
    scanf("%i", &count);
    printf("The factorial of %i is ", count);


    counter = 1;
    multiply = 1;
    while (count >= counter)
    {
        multiply = multiply * counter;
        counter = counter + 1;
    }
    printf("%i.", multiply);

    return 0;
}