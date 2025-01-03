#include<stdio.h>
void main()
{
    int marks[10];
    int *p=marks; //pointer of marks entered
    int distinction=0,firstclass=0,pass=0,fail=0;
    printf("\nenter the marks of 10 students for the subject CEUC101\n");
    for(int i=0; i<10; i++)
    {
        printf("student %d: ",i+1);
        scanf("%d",p);
        p++;
    }

    p=marks; //to bring pointer back to first entry
    for (int i=0; i<10; i++)
    {
        if(*p>=70)
        {
            distinction++; //counter
        }
        else if(*p>=60)
        {
            firstclass++;
        }
        else if(*p>=40)
        {
            pass++;
        }
        else
        {
            fail++;
        }
        p++;

    }
    printf("\nDISTINCTION %d FIRST CLASS %d PASS %d FAIL %d",distinction,firstclass,pass,fail);
    printf("\n24CE016_Palak Bhut");
}

