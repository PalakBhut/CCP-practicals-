#include<stdio.h>
void main()
{
    int marks;
    printf("enter marks of student to know the grade:");
    scanf("%d",&marks);
    printf("your result is :grade ");
    (marks>=90&&marks<=100)?printf("A"):(marks>=80&&marks<90)?printf("B"):(marks>=70&&marks<80)?printf("C"):(marks>=60&&marks<70)?printf("D"):(marks>=0&&marks<60)?printf("F"):printf("\nInput is invalid kindly enter marks between 0-100 only."); //conditional operator used
    printf("\n24CE016_Palak Bhut");
}
