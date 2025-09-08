/*step1: start
step2: print "Upto how many even numbers do you want to print? "
step3: read Count
step4: Counter = 0
step5: print "The even numbers upto " + Count + " are "
step6: print Counter
step7: if Counter < Count
          Counter = Counter+2
          print ", " + Counter
          goto step7
step8: print "."
step9: stop
*/

#include<stdio.h>

int main()
{
    int count, counter;

    printf("Upto how many even numbers do you want to print? ");
    scanf("%i", &count);
    printf("The even numbers upto %i are %i ", count,counter);

    counter = 0;
    while (counter <= count)
    {
        counter = counter + 2;
        if (counter < count)
        {
            printf(", %i", counter);
        }
    }
    printf(".\n");

    return 0;
}