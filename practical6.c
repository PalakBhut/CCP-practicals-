#include<stdio.h>
void main()
{
    float num1,num2,add=0;
    float div;
    char opperation;

    printf("\nenter the opperation to perform: ");
    scanf("%s",&opperation);
    printf("\nenter first number:");
    scanf("%f",&num1);
    printf("\nenter second number:");
    scanf("%f",&num2);

    switch(opperation) //to switch different operations
    {
    case '+': //when + entered
        add=num1+num2;
        printf("\naddition of given numbers is %.2f",add);
        break;


    case '-' : //when - entered

        printf("\nsubstraction of given numbers is %.2f",num1-num2);
        break;


    case '*' : //when * entered

        printf("\nmultiplication of given numbers is %.2f",num1*num2);
        break;


    case '/' : //when / entered

        div=num1/num2;
        printf("\ndivision of given numbers is %.2f",div);
        break;

    default :

        printf("\ninvalid opperation!");
        break;

    }
printf("\n24CE016_Palak Bhut");
}
