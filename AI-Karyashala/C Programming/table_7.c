/*step1: start
step2: print "The multiplication table of 7."
step3: read Count
step4: Counter = 1
step5: print "The first " + Count + "table of 7 is:/n"
step6: Table = 7 * Counter
step7: TableRow = 7 + " x " + Counter + " = " + Table + "/n"
step8: if Counter <= Count
          print TableRow
          Counter = Counter + 1
          goto step6
step9: stop
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