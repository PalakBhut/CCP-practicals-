#include <stdio.h>
void fibo(int);
void main()
{
    int n,n1,n2;
    printf("enter number of months:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("the input is invalid.");
    }
    else
    {
        fibo(n);//call function
    }
    printf("\n24CE016_Palak Bhut");
}
void fibo(int n)
{
    int next,n1,n2,i;
    printf("\nenter saving of first month.");
    scanf("%d",&n1);
    printf("\nenter saving of second month.");
    scanf("%d",&n2);
    printf("series for total saving is:\n");
    if(n==1)
    {
        printf("%d",n1);//printing 1 number
    }
    else
    {
        printf("%d   %d",n1,n2);
    }
    for(i=2; i<n; i++)//adding last two to get next
    {
        next=n1+n2;
        printf("     %d",next);
        n1=n2;
        n2=next;
    }
}
