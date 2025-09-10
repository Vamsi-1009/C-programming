/*step1: start
step2: print "Enter the value of sum: "
step3: read Sum
step4: print " Enter the value of product: "
step5: read Product
step6: Table = 20
step7: Limit = 10
step8: Result = 0
step9: Count = 1
step10: Counter = 0
step11: if Counter <= Limit
           Counter = Counter + 1
           Result = Count * Counter
           if Result = Product
              goto step13
           goto step11
step12: if Count <= Table
           Count = Count + 1
           goto step10
step13: if (Count + Counter) = Sum
           print "The two numbers are " + Count + " and " + Counter + "."
           goto step15
        goto step12
step14: print "We cant compute sum and product values."
step15: stop*/

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
               return 0;
            }
         }
         counter = counter + 1;
      }
      count = count + 1;
   }
   printf("We can't compute sum and product values.");

   return 0;
}