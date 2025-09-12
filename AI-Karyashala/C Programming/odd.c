/*
step-1: start
step-2: print "How many odd numbers do you want to print? "
step-3: read count
step-4: counter = 1
step-5: oddcounter = 0
step-6: print "The first " + count + " even numbers are" +
step-7: print oddcounter
step-8: if counter < count
          oddcounter = oddcounter+2
          print ", " + oddcounter
          counter = counter+1
          goto step-8
step-9: print "."
step-10: stop
*/

#include <stdio.h>

int main()
{

    int count, counter, oddcounter;

    printf("How many odd numbers do you want to print? ");
    scanf("%i", &count);
    printf("The first %i even numbers are: ", count);

    counter = 0;
    oddcounter = 1;
    while (counter < count)
    {
        printf("%i", oddcounter);

        if (counter < count - 1)
        {
            printf(", ");
        }

        oddcounter = oddcounter + 2;
        counter = counter + 1;
    }

    printf(".\n");

    return 0;
}
