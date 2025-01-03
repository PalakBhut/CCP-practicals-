#include<stdio.h>
void main()
{
    char *a;
    a=(char *)calloc(10,sizeof(char));
    printf("\nenter a string: "); //size will be 10bytes
    gets(a);
    printf("string before reallocation of memory for array: ");
    puts(a);
    a=(char *)realloc(a,20*sizeof(char));
    printf("\nenter a string: "); //maximum size can be 20bytes
    gets(a);
    printf("\nstring after reallocation of memory for array: ");
    puts(a);
    free(a);
    printf("\n24CE016_Palak Bhut");
}
