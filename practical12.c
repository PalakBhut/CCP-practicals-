#include<stdio.h>
void main()
{
    int days,total_budget=0;
    for(days=0;days<100;days++) //loop for 100 days
    {
        if(days%2==0) //for even days
        {
            total_budget+=200; //each day has cost 200
        }
    }
    printf("total budget allocated for all even days event is %d",total_budget);
    printf("\n24CE016_Palak Bhut");
}
