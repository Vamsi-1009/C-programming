/*
step1: start
step2: print "Which multiplication table you want to print? "
step3: read Table
step4: Count = 20
step5: Counter = 1
step6: print "The first " + Count + " table of " + Table + " is:\n"
step7: TableRow = Table * Counter
step8: TableColumn = Table + " x " + Counter + " = " + TableRow + "\n"
step9: if Counter <= Count
          print TableColumn
          Counter = Counter + 1
          goto step6
step10: stop
*/

# include<stdio.h>

int main()
{
    int table, count, counter, tablerow;

    printf("which multiplication table you want to print? ");
    scanf("%i", &table);
    printf("The fist %i table of %i is:\n", count, table);

    count = 20;
    counter = 1;
    while (counter <= count)
    {
        tablerow = table * counter;
        printf("%i x %i = %i\n", table, counter, tablerow);
        counter = counter + 1;
    }

    
    return 0;
}