/*Step1: Start
Step2: Print "To compute N power N."
Step3: Print "Enter the limit:"
Step4: Read Limit
Step5: Count = 2
step6: print "The n power n series upto " + Limit + " is " + (Count-1)
Step7: Multiply = 1
Step8: Counter = 1
Step9: if Counter <= Count
          Multiply = Multiply * Count
          Counter = Counter + 1
          goto Step9
Step10: if Multiply <= Limit
          Print ", " + Multiply
          Count = Count + 1
          goto Step7
step11: print "."
Step12: Stop*/

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

