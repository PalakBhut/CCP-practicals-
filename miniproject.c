#include<stdio.h>
#include<string.h>
#include<ctype.h>
void decimalToRoman(int x);
int romanToDecimal(char *roman);
void main()
{
    int choice,decimal_number;
    char roman_number[20];
    printf("Enter 1 to convert decimal to roman.\nEnter 2 to convert roman to decimal.\nEnter 3 to exit.");
    do
    {
        printf("\nEnter your choice :");
        fflush(stdin);
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter decimal number :");
            fflush(stdin);
            scanf("%d",&decimal_number);
            if(decimal_number<0)
            {
                printf("kindly enter positive number.");
            }
            else if(decimal_number==0)
            {
                printf("0");
            }
            else
            {
                decimalToRoman(decimal_number);
            }

            break;
        case 2:
            printf("Enter roman number :");
            fflush(stdin);
            scanf("%s",&roman_number);
            for(int i=0; i<roman_number[i]; i++)
            {
                roman_number[i]=toupper(roman_number[i]);
            }
            int number=romanToDecimal(roman_number);
            if(number==0)
            {
                printf("Zero does not exist in roman number.");
            }
            else
            {
                printf("Decimal value of given roman number is %d\n",number);
            }
            break;
        case 3:
            printf("\nThank You");
            break;
        default:
            printf("Enter valid choice");
            }
    }
    while (choice!=3);




}
void decimalToRoman(int d)
{
    char *symbols[]= {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    printf("Roman numeral of given decimal number is: ");
    for(int i=0; i<13; i++)
    {
        while(d>=values[i])
        {
            printf("%s",symbols[i]);
            d-=values[i];
        }
    }
    printf("\n");

}
int romanToDecimal(char *roman)
{
    int midValue=0;
    int preValue=0;
    int curValue=0;

    for(int i=strlen(roman)-1; i>=0; i--)
    {
        if (roman[i] == 'I') curValue = 1;
        else if (roman[i] == 'V') curValue = 5;
        else if (roman[i] == 'X') curValue = 10;
        else if (roman[i] == 'L') curValue = 50;
        else if (roman[i] == 'C') curValue = 100;
        else if (roman[i] == 'D') curValue = 500;
        else if (roman[i] == 'M') curValue = 1000;
        if(curValue<midValue)
        {
            midValue-=curValue;

        }
        else
        {
            midValue+=curValue;
        }
        preValue=curValue;
    }
    return midValue;
}

