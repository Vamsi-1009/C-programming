/*step1: start
step2: print "How many odd numbers do you want to print? "
step3: read Count
step4: Counter = 1
step5: OddCounter = 0
step6: print "The first " + Count + " even numbers are" +
step7: print OddCounter
step8: if Counter < Count
          OddCounter = OddCounter+2
          print ", " + OddCounter
          Counter = Counter+1
          goto step8
step9: print "."
step10: stop
*/

#include <stdio.h>

int main()
{

    int count, counter, oddcounter;

    printf("How many odd numbers do you want to print? ");
    scanf("%i", &count);
    printf("The first %i even numbers are ", count);

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