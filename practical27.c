#include<stdio.h>
void swapBalance(double *account1, double *account2)
{
    double temp=*account1;
    *account1=*account2;
    *account2=temp;
}
void main()
{
    double accountbalance1,accountBalance2;

    //get the value of both the balances
    printf("\nenter the balance of account 1: ");
    scanf("%lf",&accountbalance1);
    printf("\nenter the balance of account 2: ");
    scanf("%lf",&accountBalance2);
    //print the value of both the balances
    printf("\nbefore swapping:\n");
    printf("\naccount balance 1 is %lf ",accountbalance1);
    printf("\naccount balance 2 is %lf ",accountBalance2);
    swapBalance(&accountbalance1,&accountBalance2);
    printf("\nAfter swapping:\n");
    printf("\naccount balance 1 is : %lf ",accountbalance1);
    printf("\naccount balance 2 is %lf",accountBalance2);
    printf("\n24CE016_Palak Bhut");

}
