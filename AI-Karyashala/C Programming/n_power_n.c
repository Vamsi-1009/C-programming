/*
step-1: start
step-2: print "To compute N power N./n"
step-3: print "Enter N: "
step-4: read count
step-5: counter = 2
step-6: multiply = count * count
step-7: print count + " multiplied " + count + "times " + " is "
step-8: if count > counter
          multiply = multiply * count
          counter = counter + 1
          goto step-8
step-9: print multiply + "."
step-10:stop
*/

#include<stdio.h>

int main()
{
    int count, counter, multiply;

    printf("To compute n power n.\n");
    printf("Enter n: ");
    scanf("%i",&count);
    multiply = count * count;
    printf("%i multiplied %i times is", count, count);

    counter = 2;
    while (count > counter)
    {
        multiply = multiply * count;
        counter = counter + 1;
    }
    printf(" %i.\n", multiply);


    return 0;
}
