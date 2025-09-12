/*
step-1: start
step-2: print "Enter a number to check whether it is prime or not: "
step-3: read Count
step-4: multiply = 1
step-5: result = 0
step-6: if multiply > count
          goto Step 12
step-7: counter = 1
step-8: if counter > count
          goto Step 11
step-9: if multiply * counter == count
          result = result + 1
step-10: counter = counter + 1
step-11: if counter <= count
           goto step-9
step-12: multiply = multiply + 1
step-13: if multiply <= count
           goto step-7
step-14: if result == 2
           print "Prime"
           goto step-16
step-15: if result != 2
           print "Not Prime"
step-16: stop
*/

#include<stdio.h>

int main()
{
        int count, multiply, result, counter;

        printf("To check wether given number is prime or not.\n");
        printf("Enter a number: ");
        scanf("%i", &count);

        multiply = 1;
        result = 0;
        while (multiply <= count)
        {
                counter = 1;
                while (counter <= count)
                {
                        if (multiply * counter == count)
                        {
                                result = result + 1;
                        }
                        counter = counter + 1;
                }
                multiply = multiply + 1;
        }
        if (result == 2)
        {
                printf("it is prime.");
        }
        if (result != 2)
        {
                printf("it is not a prime.");
        }

        return 0;
}
