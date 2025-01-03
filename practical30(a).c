#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *file;
    char word[35];
    int index=0;
    char ch;
    //open the file
    file=fopen("demo.txt","r");
    if(file==NULL)
    {
        printf("ERROR:file does not exist.");
        return 1;
    }
    printf("Reversed word:\n");
    while((ch=getc(file))!=EOF)
    {
        if(ch==' '||ch=='\n')
        {
            for(int i=index-1;i>=0;i--)
            {
                //print the reversed word
                putc(word[i],stdout);
            }
            putc('\n',stdout);
            index=0; //reset index for new word
        }
        else
        {
            word[index++]=ch;
        }
    }
    //if the file is not ending with newline
    if(index>0)
    {
        for(int i=index-1;i>=0;i--)
        {
            putc(word[i],stdout);
        }
        putc('\n',stdout);
    }
    //close the file
    fclose(file);
    printf("\n24CE016_Palak Bhut");

}
