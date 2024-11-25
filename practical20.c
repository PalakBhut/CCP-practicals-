#include<stdio.h>
void displayMessage();
int numStudents();
void collectGrades(int g[]);
float averageGrade(int,int);
void main()
{
    float average_grade;
    int n,avg,g[n];
    displayMessage();
    n=numStudents();
    collectGrades(g[n]);
    average_grade=averageGrade(n,g[n]);
    printf("%f",average_grade);
}
void displayMessage()
{
    printf("Welcome to CHARUSAT University!");
    printf("\n--------------------------------");
    printf("\n--------------------------------");
}
int numStudents()
{
    int n;
    printf("\nenter number of students:");
    fflush(stdin);
    scanf("%d",&n);
    return n;
}
void collectGrades(int g[])
{
    int n;
    printf("\nStudent Grades:");
    for(int i=0; i<n; i++)
    {
        printf("\nenter the grade for student %d: ",i+1);
        scanf("%d",&g[i]);
        printf("student %d: Grade=%d",i+1,g[i]);
    }
}
float averageGrade(int N,int g[])
{
    float avg;
    for(int i=0;i<N;i++)
    {
        printf("\nenter the grade for student %d(for average calculation):%d",i+1,g[i]);
    }
    for(int i=0;i<N;i++)

    {
        avg+=g[i];
    }
    printf("\nthe average grade of the student is:");

    return avg/N;
}
