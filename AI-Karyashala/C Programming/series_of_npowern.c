/*
step-1: start
step-2: print "To compute N power N."
step-3: print "Enter the limit:"
step-4: read Limit
step-5: Count = 2
step-6: print "The n power n series upto " + Limit + " is " + (Count-1)
step-7: Multiply = 1
step-8: Counter = 1
step-9: if Counter <= Count
          Multiply = Multiply * Count
          Counter = Counter + 1
          goto step-9
step-10: if Multiply <= Limit
          print ", " + Multiply
          Count = Count + 1
          goto step-7
step-11: print "."
step-12: Stop*/

#include<stdio.h>

int main()
{
    int limit, count, multiply, counter;

    printf("To compute n power n.\n");
    printf("Enter the limit: ");
    scanf("%i", &limit);
    count = 2;
    printf("The n power n serious upto %i is", limit);


    multiply = 1;
    while (multiply <= limit)
    {
        multiply = 1;
        counter = 1; 
        
        while (counter <= count)
        {
            multiply = multiply * count;
            counter = counter + 1;

        }
        if (multiply <= limit)
        {
            if (count > 1)
            {
                printf(", ");
            }
            printf("%i", multiply);
        }
        count = count + 1;
        
    }
    printf(".\n");

    return 0;
}

