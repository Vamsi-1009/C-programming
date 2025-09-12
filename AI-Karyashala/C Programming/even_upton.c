/*step1: start
step2: print "Upto how many even numbers do you want to print? "
step3: read count
step4: counter = 0
step5: print "The even numbers upto " + count + " are "
step6: print counter
step7: if count-1 > counter:
          counter = counter+2
          print ", " + counter
          goto step-7
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
