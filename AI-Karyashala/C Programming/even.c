/*step1: start
step2: print "How many even numbers do you want to print? "
step3: read Count
step4: Counter = 1
step5: Even Counter = 0
step6: print "The first " + Count + " even numbers are" +
step7: print EvenCounter
step8: if Counter < Count
          EvenCounter = EvenCounter+2
          print ", " + EvenCounter
          Counter = Counter+1
          goto step8
step9: print "."
step10: stop
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
