#include <stdio.h>

void main()
{
    int rows = 4; // Number of rows

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < rows - i - 1; j++)// Print leading spaces
        {
            printf(" ");
        }


        for (char ch = 'A'; ch < 'A' + i + 1; ch++)// Print increasing characters
        {
            printf("%c", ch);
        }


        for (char ch = 'A' + i - 1; ch >= 'A'; ch--)// Print decreasing characters
        {
            printf("%c", ch);
        }


        printf("\n");// Move to the next line after each row
    }
    printf("24CE016_Palak Bhut");


}
