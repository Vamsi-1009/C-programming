/*Step1: Start
Step2: Print "How many multiples of 7 you want to print? "
Step3: Read Count
Step4: Counter = 1
Step5: Print "The first " + Count + " multiples of 7 are: "
Step6: Multiples = 7 * Counter
Step7: If Counter < Count
          Print Multiples + ", "
          Counter = Counter + 1
          Goto Step6
Step8: Print Multiples + "."
Step9: Stop
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