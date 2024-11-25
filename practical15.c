#include<stdio.h>
void main()
{
    int i,positive=0,negative=0,even=0,odd=0,numbers[25];
    printf("enter 25 numbers to classify them :\n");
    for(i=0;i<25;i++)
    {
        scanf("%d",&numbers[i]);//take 25 numbers
    }
    for(i=0;i<25;i++)//loop for classify numbers
    {

    if(numbers[i]>0)
    {
        positive++;
    }
    else
    {
        negative++;
    }
    if(numbers[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    }
    printf("\ntotal positive numbers is %d.",positive);
    printf("\ntotal negative numbers is %d",negative);
    printf("\ntotal even numbers is %d",even);
    printf("\ntotal odd numbers is %d",odd);
    printf("\n24CE016_Palak Bhut");
}
