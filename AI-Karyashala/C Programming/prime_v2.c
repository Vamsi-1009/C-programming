/*sstep-1: start
step-2: print "Enter the number to check whether it is a prime or not:"
step-3: read count
step-4: counter = 2
step-5: if count <= 1
          print count + " is not a prime number"
          goto step-8
step-6: if (counter * counter) <= count
          if (count % counter) == 0:
            print count + " is not a prime number"
            goto step-8
          counter = counter + 1
          goto step-6
step-7: print count + " is a prime number"
step-8: stop
*/

#include<stdio.h>

int main()
{

	int count, counter;

	printf("Enter the number to check weather it is a prime or not: ");
	scanf("%i", &count);


	counter = 2;
	if (count <= 1)
	{
		printf("%i is not a prime number.\n", count);
	}


	if (count > 1)
	{
		while ((counter * counter) <= count)
	    {
		 	if ((count % counter) == 0)
			{
				printf("%i is not a prime number.\n", count);
				count = 0;
			}
			counter = counter + 1;
		}
		if (count != 0)
		{
			printf("%i is a prime number.\n", count);
		}
		
	}

	return 0;
}