#include<stdio.h>
void main()
{
    int sec,i;
    printf("Timer begins from :");
    scanf("%d",&sec);
    for(i=sec; i<=sec; i--) //loop for decrementing seconds
    {
        sleep(1); //for printing each number after 1 sec
        printf("\n%d",i);
        if(i==0)
        {
            printf("\ncountdown completed!");
            break;
        }
    }
    printf("\n24CE016_Palak Bhut");
}
