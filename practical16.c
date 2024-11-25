#include<stdio.h>
void main()
{
    int no_of_items,i,j,temp;
    float price[5];
    printf("enter number of items who's price is to be sorted :");
    fflush(stdin);
    scanf("%d",&no_of_items);
    printf("\nenter price of %d items\n",no_of_items);
    for(i=0;i<no_of_items;i++) //get price of items
    {
        fflush(stdin);
        scanf("\n%f",&price[i]);
    }
    printf("\nso, prices of %d items is as follows\n",no_of_items);
    for(i=0;i<no_of_items;i++)//print price of items
    {
        printf("\n%.2f",price[i]);
    }
    printf("\namount of items in ascending order is as follows :\n");
    for(i=0;i<no_of_items;i++)
    {
        for(j=i+1;j<no_of_items;j++)
        {
            if(price[i]>price[j])//to arrange in ascending order
            {
                temp=price[i];
                price[i]=price[j];
                price[j]=temp;
            }
        }
    }
    for(i=0;i<no_of_items;i++)
    {
       printf("\n%.2f",price[i]);//print in ascending order
    }
    printf("\n24CE016_Palak Bhut");

}
