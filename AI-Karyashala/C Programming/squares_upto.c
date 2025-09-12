/*
step-1: start
step-2: print "Upto which number you want to print squares? "
step-3: read count
step-4: counter = 2
step-5: square = 1
step-6: print "The squares upto " + count + " are " + square 
step-7: square = counter * counter
step-8: if count >= square
          print ", " + square
          counter = counter + 1
          goto step-7
step-9: print "."
step-10: stop
*/

#include<stdio.h>

int main()
{
    int count, counter, square;

    printf("Upto which number you want to print squares? ");
    scanf("%i",&count);
    

    counter = 2;
    square = 1;
    printf("The squares upto %i are %i",count, square);
    while (square < count - 1)
    {
        square = counter * counter;
        printf(", %i", square);
        counter = counter + 1;
    }
    printf(".\n");

    
    return 0;
}
