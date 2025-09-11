/*step1: Start
 print "Enter the number to check weather it is a prime or not: "
step2: Print "Enter a number:"
step3: Read Count
step4: Set Multiply = 1
step5: Set Result = 0
step6: If Multiply <= Count 
step7: Set Counter = 1
step8: If Counter <= Count 
step9: If Multiply * Counter = Count 
          Result = Result + 1
          Counter = Counter + 1 
          goto step8
step10: Multiply = Multiply + 1 
        goto step6
step11: If Result = 2 
           Print "Prime"
           goto step13
step12: Print "Not Prime"
step13: Stop*/

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
