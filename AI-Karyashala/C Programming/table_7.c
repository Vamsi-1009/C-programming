/*
step-1: start
step-2: print "The multiplication table of 7.\n"
step-3: read count
step-4: counter = 1
step-5: print "The first " + count + "table of 7 is:\n"
step-6: table = 7 * counter
step-7: tablerow = 7 + " x " + counter + " = " + table + "\n"
step-8: if counter <= count
          print tablerow
          counter = counter + 1
          goto step-6
step-9: stop
*/

#include<stdio.h>

int main()
{
    int count, counter, table;

    printf("The multiplication table of 7.");
    scanf("%i", &count);
    printf("The first %i table of 7 is:\n", count);

    counter = 1;
    while (counter <= count)
    {
        table = 7 * counter;
        printf("7 x %i = %i\n", counter, table);
        counter = counter + 1;
    }
    
    return 0;
}
