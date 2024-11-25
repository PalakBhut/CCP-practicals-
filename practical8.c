#include<stdio.h>
void main()
{
    printf("menu of the restaurant is as follows:\n");
    printf("1. Burger=150/-\n2. Pizza=200/-\n3. Pasta=120/-\n4. Sandwich=100/-\n5. French Fries=80/-\n");
    printf("enter your choices from 1-5 :");
    int bill=0,choice;
    while(1) //loop will rotate till choice becomes 0
    {
        scanf("%d",&choice);
        switch(choice)
        {
        case 0:
            printf("your amount is : %d",bill);
            break;
        case 1:
            bill+=150; //add price to bill
            break;
        case 2:
            bill+=200;
            break;
        case 3:
            bill+=120;
            break;
        case 4:
            bill+=100;
            break;
        case 5:
            bill+=80;
            break;
        default :
            printf("invalid order is placed");
            break;
        }
        if(choice==0)
        {
            break;
        }
    }

printf("\n24CE016_Palak Bhut");
}

