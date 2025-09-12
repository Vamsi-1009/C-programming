/*
step-1: start
step-2: print "How many even numbers do you want to print? "
step-3: read count
step-4: counter = 1
step-5: evencounter = 0
step-6: print "The first " + count + " even numbers are"
step-7: print evencounter
step-8: if counter < count
          evencounter = evencounter+2
          print ", " + evencounter
          counter = counter+1
          goto step-8
step-9: print "."
step-10: stop
*/

#include <stdio.h>

int main()
{

    int count, counter, evencounter;

    printf("How many even numbers do you want to print? ");
    scanf("%i", &count);
    printf("The first %i even numbers are ", count);

    counter = 0;
    evencounter = 0;
    while (counter < count)
    {
        printf("%i", evencounter);

        if (counter < count - 1)
        {
            printf(", ");
        }

        evencounter = evencounter + 2;
        counter = counter + 1;
    }

    printf(".\n");

    return 0;
}
