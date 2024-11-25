#include<stdio.h>
void main()
{
    int i,j,n,seating[5][10],n1,n2;
    printf("enter number of reserved seats: ");
    fflush(stdin);
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

        printf("\nenter row and seat number for reserved seat %d(e.g., 2 5):",i+1);
        fflush(stdin);
        scanf("%d %d",&n1,&n2);
        seating[n1][n2]=1; //saving reserved seats



    }
    printf("Seating chart:");//

    for(i=0; i<5; i++)//printing seating arrangement

    {
        printf("\nrow %d:",i+1);
        for(j=0; j<10; j++)
        {

            if(seating[i+1][j+1]==1)
            {
                printf(" X"); //reserved seats
            }
            else
            {
                printf(" 0");
            }

        }
        printf("\n");
    }
    printf("24CE016_Palak Bhut");


}
