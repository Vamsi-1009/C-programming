/*step1: start
step2: print "To compute N power N./n"
step3: print "Enter N: "
step4: read Count
step5: Counter = 2
step6: Multiply = Count * Count
step7: print Count + " multiplied " + Count + "times " + " is "
step8: if Count > Counter
          Multiply = Multiply * Count
          Counter = Counter + 1
          goto step8
step9: print Multiply + "."
step10:stop*/

#include<stdio.h>

int main()
{
    int count, counter, multiply;

    printf("To compute n power n.\n");
    printf("Enter n: ");
    scanf("%i",&count);
    multiply = count * count;
    printf("%i multiplied %i times is", count, count);

    counter = 2;
    while (count > counter)
    {
        multiply = multiply * count;
        counter = counter + 1;
    }
    printf(" %i.\n", multiply);


    return 0;
}