#include<stdio.h>
void main()
{
    int i,j;
    printf("enter the size of table vertically :");
    scanf("%d",&i);
    printf("enter the size of table horizonatlly :");
    scanf("%d",&j);
    printf("\n\nMultiplication table (%dx%d):\n",i,j);
    for(int v=1;v<=i;v++)
    {
        for(int u=1;u<=j;u++) //two loop for horizontal and vertical rotation
        {
            printf("\t%d",v*u);
        }
        printf("\n");
    }
    printf("24CE016_Palak Bhut");
}
