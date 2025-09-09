/*step1: start
step2: print "How many squares you want to print? "
step3: read Count
step4: Counter = 2
step5: Square = 1
step6: print "The first " + Count + " squares are " + Square
step7: Square = Counter * Counter 
step8: if Count >= Counter
          print ", " + Square
          Counter = Counter + 1
          goto step7
step9: print "."
step10: stop
*/

#include<stdio.h>

int main()
{
    int count, counter, square;

    printf("How many squares you want to print? ");
    scanf("%i",&count);
    

    counter = 2;
    square = 1;
    printf("The squares upto %i are %i",count, square);
    while (counter <= count)
    {
        square = counter * counter;
        printf(", %i", square);
        counter = counter + 1;
    }
    printf(".\n");

    
    return 0;
}