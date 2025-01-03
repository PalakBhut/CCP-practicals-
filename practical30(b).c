#include<stdio.h>
void main()
{
    FILE *file;
    int marks,n,i;
    //writing marks in the file
    file=fopen("marks.txt","w");
    if(file==NULL)
    {
        printf("Error:opening file for writing\n");
        return 1;
    }
    printf("Enter the number of students.\n");
    scanf("%d",&n);
    printf("enter marks of %d students: \n",n);
    for(i=0;i<n;i++)
    {
        printf("Student %d: ",i+1);
        scanf("%d",&marks);
        putw(marks,file);//write marks using putw()
    }
    fclose(file);
    printf("Marks have been written to 'marks.txt' .\n");
    //reading marks from the file
    file=fopen("marks.txt","r");
    if(file == NULL)
    {
        printf("Error: opening file for reading.\n");
        return 1;
    }
    printf("\nreading marks from the file .\n");
    i=1;
    while((marks = getw(file))!= EOF)
    {
        printf("Student %d: %d\n",i, marks);
        i++;
    }
    fclose(file);
    printf("\n24CE016_Palak Bhut");


}
