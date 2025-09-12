/*
step-1: start
step-2: print "Enter the number to find the factorial: "
step-3: read count
step-4: counter = 1
step-5: multiply = 1
step-6: print "The factorial of " + count + " is "
step-7: if count >= counter
          multiply = multiply * counter
          counter = counter + 1
          goto step-7
step-8: print multiply + "."
step-9:stop*/



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
