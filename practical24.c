#include<stdio.h>
struct book
{
    char title[20];
    char author[20];
    float amount;
};
void bookinfo(struct book[],int);
void main()
{
    struct book b[3];
    printf("\ntitle: ");
    gets(b[3].title);
    printf("\nauthor: ");
    gets(b[3].author);
    printf("\namount: ");
    scanf("%f",&b[3].amount);
    bookinfo(b,3);
}
void bookinfo(struct book b[],int size)
{
    printf("\ntitle of the book is ");
    puts(b[3].title);
    printf("\nauthor of book is ");
    puts(b[3].author);
    printf("\namount of book is ");
    printf("%f",b[3].amount);
    printf("\n24CE016_Palak Bhut");
}
