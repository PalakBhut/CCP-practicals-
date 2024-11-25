#include <stdio.h>
void main()
{
    int i,j;
    char Student_name[5][50],temp[25];
    printf("enter names of 5 students :");
    for(i=0; i<5; i++)
    {
        printf("\ngive name student %d: ",i+1);
        fflush(stdin);
        scanf ("%s",&Student_name[i]);
    }
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(Student_name[i],Student_name[j])>0)//in ascending order
            {
                strcpy(temp,Student_name[i]);
                strcpy(Student_name[i],Student_name[j]);
                strcpy(Student_name[j],temp);
            }
        }
    }
    printf("Names in alphabetical order is as follows:");
    for(i=0; i<5; i++)
    {
        printf("\nname of %d student is: %s\n",i,Student_name[i]);//in ascending order
    }
    printf("24CE016_Palak Bhut");
}

