/*step-1: start
step-2: print "Enter the value of sum: "
step-3: read Sum
step-4: print " Enter the value of product: "
step-5: read Product
step-6: Table = 20
step-7: Limit = 10
step-8: Result = 0
step-9: Count = 1
step-10: Counter = 0
step-11: if Counter <= Limit
           Counter = Counter + 1
           Result = Count * Counter
           if Result == Product:
             goto step-12
           goto step-11
step-12: if (Count + Counter) == Sum
           print "The two numbers are " + Count + " and " + Counter + "."
           goto step-15
           goto step-13
step-13: if Count <= Table
           Count = Count + 1
           goto step-10
step-14: print "We cant compute sum and product values."
step-15: stop*/

#include<stdio.h>

int main()
{

   int sum, product, table, limit, result, count, counter;

   printf("Enter the value of sum: ");
   scanf("%i", &sum);
   printf("Enter the value of product: ");
   scanf("%i", &product);


   table = 20;
   limit = 10;
   result = 0;
   count = 1;
   while (count <= table)
   {
      counter = 1;
      while (counter <= limit)
      {
         result = count * counter;
         if (result == product)
         {
            if ((count + counter) == sum)
            {
               printf("The two numbers are %i and %i.\n", count, counter);
               goto EXIT;
            }
         }
         counter = counter + 1;
      }
      count = count + 1;
   }
   printf("We can't compute sum and product values.");

   EXIT:
   return 0;
}