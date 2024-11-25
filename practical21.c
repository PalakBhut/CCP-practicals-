#include<stdio.h>
#include<math.h>
void collectLenght(int,int,int);
int validTriangle(int,int,int);
float areaOfTriangle(int,int,int);
void main()
{
    int a,b,c;
    float area;
    collectLenght(a,b,c);
    fflush(stdin);
    if(validTriangle(a,b,c))
    {
        printf("\nthe lenghts entered is valid to form a triangle.");
        fflush(stdin);
        area=areaOfTriangle(a,b,c);
        fflush(stdin);
        printf("\nthe area of triangle is %f",area);
    }
    else
    {
        printf("the lengths of triangle is not valid.");
    }
}
void collectLenght(int x,int y,int z)
{
    printf("enter the length of side 1: ");
    fflush(stdin);
    scanf("%d",&x);
    printf("enter the lenght of side 2: ");
    fflush(stdin);
    scanf("%d",&y);
    printf("enter the lenght of side 3: ");
    fflush(stdin);
    scanf("%d",&z);

}
int validTriangle(int x,int y,int z)
{
    if(x+y>z&&y+z>x&&z+y>x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
float areaOfTriangle(int a,int b,int c)
{
    float sum;
    sum=(a+b+c)/2;
    fflush(stdin);
    return sqrt(sum*(sum-a)*(sum-b)*(sum-c));
}
