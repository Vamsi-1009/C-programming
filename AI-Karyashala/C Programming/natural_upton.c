/*step1: start
step2: print "Upto which number you want to print natural numbers? "
step3: read Count
step4: Counter = 1
step5: print "The natural numbers upto " + Count + " are " 
step6: print  Counter  + ","
step7: if Count != Counter;
          Counter = +1
          goto step6
step8: print  Counter  + "."
step9: stop
*/

# include<stdio.h>

int main()
{
    int Count, Counter;

    printf("Upto which number you want to print natural numbers? ");
    scanf("%i", &Count);
    printf("The natural numbers upto %i are ", Count);
    
    Counter = 1;
    while(Counter <= Count)
    {
        printf("%i", Counter);
        if(Counter < Count)
        {
            printf(", ");
        }
        Counter++;
    }
    printf(".\n");



    return 0;
}