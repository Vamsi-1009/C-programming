/*
step-1: start
step-2: print "The table book."
step-3: table = 1
step-4: limit = 20
step-5: count = 20
step-6: counter = 1
step-7: print "The " + table + " table is:\n"
step-8: tablerow = table * counter
step-9: tablecolumn = table + " x " + counter + " = " + tablerow + "\n"
step-10: if counter <= count
           print tablecolumn
           counter = counter+1
           goto step-8
step-11:  table = table+1
step-12:  if table <= imit
            goto step-6
step-13: stop
*/

#include <stdio.h>

int main()
{

    int table, limit, count, counter,tablerow;

    printf("The table book:\n");
    


    table = 1;
    limit = 20;
    count = 20;
    while (table <= limit)
    {
        printf("\nThe %i table is:\n\n", table);
        counter = 1;
        while (counter <= count)
        {
        tablerow = table * counter;
        printf("%-2i x %-2i = %-4i \n",table, counter, tablerow);
        counter = counter + 1;
        }
         table = table + 1;
    }

    
    return 0;
}
