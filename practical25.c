#include<stdio.h>
//union of the book information
union library
{
    char accession_number[7];
    char title[15];
    char author[20];
    int price;
    int flag;
}l;
void main()
{
    //get each item from user and then print it
    printf("\nenter accession number of book: ");
    gets(l.accession_number);
    printf("given accession number is: ");
    puts(l.accession_number);
    printf("\nenter title of the book: ");
    gets(l.title);
    printf("given title is: ");
    puts(l.title);
    printf("\nenter name of author of the book: ");
    gets(l.author);
    printf("given auhtor name is: ");
    puts(l.author);
    printf("\nenter price of the book: ");
    scanf("%d",&l.price);
    printf("given price is: ");
    fflush(stdin);
    printf("%d",l.price);
    printf("\nenter 1 if book is issued or 0 if book is not issued: ");
    fflush(stdin);
    scanf("%d",&l.flag);
    if(l.flag==0)
    {
        printf("book issued");
    }
    else
    {
        printf("not issued");
    }
printf("\n24CE016_Palak Bhut");

}
