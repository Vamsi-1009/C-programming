/*step-1: start
step-2: print "How many multiples of 7 you want to print? "
step-3: read count
step-4: counter = 1
step-5: print "The first " + count + " multiples of 7 are: "
step-6: multiples = 7 * counter
step-7: if counter < count:
          print multiples + ", "
          counter = counter + 1
          goto step-6
step-8: print multiples + "."
step-9: stop
*/

#include<stdio.h>

int main()
{
   int count, counter;

   printf("How many multiples of 7 you want to print? ");
   scanf("%i", &count);
   printf("The first %i multiples of 7 are: ", count);


   counter = 1;
   while (counter < count)
   {
      printf("%i, ", 7 * counter);
      counter = counter + 1;
   }
   printf("%i.\n", 7 * counter);


   
   return 0;
}