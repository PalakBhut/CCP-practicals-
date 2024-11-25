#include<stdio.h>
void main()
{
    int rmn_bnglw,rmn_plt,rmn_car,smn_aprt,smn_htl,smn_car,rmn_totalwealth,smn_totalwealth;
    rmn_bnglw=12000000;
    rmn_plt=6000000;
    rmn_car=3000000;
    smn_aprt=11000000;
    smn_htl=8000000;
    smn_car=8000000;
    rmn_totalwealth=rmn_bnglw+rmn_plt+rmn_car; //total wealth calculate
    smn_totalwealth=smn_aprt+smn_htl+smn_car;
    printf("Raman's total wealth is:%d",rmn_totalwealth);
    printf("\nSuman's total wealth is:%d",smn_totalwealth);
    if(rmn_totalwealth>smn_totalwealth)
    {
        printf("\nRaman's total wealth is greater than suman's total wealth.");
    }
    else if(rmn_totalwealth<smn_totalwealth)
    {
        printf("\nSuman's total wealth is greater than raman's total wealth.");
    }
    else
    {
        printf("\nBoth have same wealth.");
    }
printf("\n24CE016_Palak Bhut");
}
