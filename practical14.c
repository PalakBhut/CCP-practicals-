#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)//for loop for row
    {

        for(j=1;j<=i;j++)//for loop for coloumn
        {
            if(j%2==0) //0 at even places
            {
                printf("  0");
            }
            else{printf("  1");}
        }
        printf("\n"); // for next row
    }
    printf("24CE016_Palak Bhut");
}
