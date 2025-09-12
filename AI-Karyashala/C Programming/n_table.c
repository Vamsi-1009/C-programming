/*
step-1: start
step-2: print "Which multiplication table you want to print? "
step-3: read table
step-4: count = 20
step-5: counter = 1
step-6: print "The first " + count + " table of " + table + " is:\n"
step-7: tablerow = table * counter
step-8: tablecolumn = table + " x " + counter + " = " + tablerow + "\n"
step-9: if counter <= count
          print tablecolumn
          counter = counter + 1
          goto step-7
step-10: stop
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
