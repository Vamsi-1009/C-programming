/*step1: start
step2: print "Upto which number you want to print natural numbers? "
step3: read count
step4: counter = 2
step5: print "The natural numbers upto " + count + " are " 
step6: print  counter - 1  + ","
step7: if count > counter:
          counter = counter + 1
          goto step-6
step8: print  counter  + "."
step9: stop
*/

# include<stdio.h>

int main()
{
    int count, counter;

    printf("Upto which number you want to print natural numbers? ");
    scanf("%i", &count);
    printf("The natural numbers upto %i are ", count);
    
    Counter = 1;
    while(counter <= count)
    {
        printf("%i", counter);
        if(counter < count)
        {
            printf(", ");
        }
        counter++;
    }
    printf(".\n");



    return 0;
}
