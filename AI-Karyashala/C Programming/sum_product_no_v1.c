/*step 1: start
step 2: print "To find two numbers from their sum and product .\n"
step 3: print "Enter their sum: "
step 4: read Sum
step 5: print "Enter their product: "
step 6: read Product
step 7: Num1 = 1
step 8: Num2 = Sum - Num1
step 9: if (Num1 * Num2) not= Product
           Num1 = Num1 + 1
           Num2 = Sum - Num1
           goto step9
step 10: print "The two numbers are " + Num1 + " and " + Num2 + "."
step 11:stop*/

#include<stdio.h>

int main()
{
    int sum, product, num1, num2;

    printf("To find two numbers from their sum and product.\n");
    printf("Enter their sum: ");
    scanf("%i", &sum);
    printf("Enter thier product: ");
    scanf("%i", &product);

    num1 = 1;
    num2 = sum - num1;
    while ((num1 * num2) != product)
    {
        num1 = num1 + 1;
        num2 = sum - num1;
    }
    printf("The two numbers are %i and %i.", num1, num2);


    return 0;
}