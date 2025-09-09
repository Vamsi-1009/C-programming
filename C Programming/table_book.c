/*step1: start
step2: print "The table book."
step3: Table = 1
step4: Limit = 20
step5: Count = 20
step6: Counter = 1
step7: print "The " + Table + " table is:\n"
step8: TableRow = Table * Counter
step9: TableColumn = Table + " x " + Counter + " = " + TableRow + "\n"
step10: if Counter <= Count
           print TableColumn
           Counter = Counter+1
           goto step8
step11:  Table = Table+1
step12:  if Table <= Limit
            goto step6
step11: stop
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
        printf("The %i table is:\n", table);
        counter = 1;
        while (counter <= count)
        {
        tablerow = table * counter;
        printf("%i x %i = %i\n",table, counter, tablerow);
        counter = counter + 1;
        }
         table = table + 1;
    }

    
    return 0;
}