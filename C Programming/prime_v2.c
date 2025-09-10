/*step1: start
step2: print "Enter the number to check weather it is a prime or not: "
step3: read Count
step4: Counter = 2
step5: if Count <= 1
          print Count + " is not a prime number"
          goto step 8
step6: if (Counter * Counter) <= Count
          if (Count % Counter) = 0
	     print Count + " is not a prime number"
	    goto step 8
	  Counter = Counter + 1
	  goto step 6
step7: print Count + " is a prime number"
step8: stop
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