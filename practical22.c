#include<stdio.h>
int totalmarks(int[],int);
float average(int[],int);
int max(int[],int);
int min(int[],int);
void main()
{
    int n;
    printf("enter number of students:");
    fflush(stdin);
    scanf("%d",&n);
    int marks[n],i;
    printf("enter ccp marks of students:\n");
    for(i=0; i<n; i++)
    {
        printf("\nmarks[%d]=",i+1);
        fflush(stdin);
        scanf("%d",&marks[i]);
    }
    printf("\ntotal marks: %d",totalmarks(marks,n));
    printf("\naverage marks: %.2f",average(marks,n));
    printf("\nminimum value: %d",min(marks,n));
    printf("\nmaximum value: %d",max(marks,n));
    printf("\n24CE016_Palak Bhut");


}
int totalmarks(int m[],int s)//function for adding numbers
{
    int sum=0,i;
    for(i=0; i<s; i++)
    {
        sum=sum+m[i];
    }
    return sum;
}
int max(int m[],int s)
{
    int maximum,i;
    maximum=m[0];
    for(i=0; i<s; i++)
    {
        if(m[i]>maximum)
        {
            maximum=m[i];

        }
    }
    return maximum;
}
int min(int m[],int s)
{
    int minimum,i;
    minimum=m[0];
    for(i=0; i<s; i++)
    {
        if(m[i]<minimum)
        {
            minimum=m[i];
        }
    }
    return minimum;
}
float average (int m[],int s)
{
    int average,i;
    for(i=0; i<s; i++)
    {
        fflush(stdin);
        average=average+m[i];

    }
    fflush(stdin);
    return (float)average/s;
}

