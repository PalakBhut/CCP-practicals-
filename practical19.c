#include<stdio.h>
void main()
{
    char note1[40],note2[40],concatinated_string[90],reversed_note1[40],reversed_note2[40],copied_note1[40],copied_note2[40];
    int f=0,choice,length1=0,lenght2=0,i,j;
    printf("enter your notes below:\nNote 1-");
    fflush(stdin);
    gets(note1);
    printf("Note 2-");
    fflush(stdin);
    gets(note2);
    printf("\npress 1-5 for performing the respective operation:\n");
    printf("0-exit.\n1-length of the strings.\n2-reversing the notes.\n3-comparing two notes.\n4-copying notes.\n5-concatenating two notes.\n");
    fflush(stdin);
    while(1)

    {
       printf("\nenter your choice:");
        fflush(stdin);
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            for(int i=0; note1[i]!='\0'; i++)
            {
                length1++;//counting one by one charcter
            }
            printf("length of \"%s\" is %d.",note1,length1);

            for(int i=0; note2[i]!='\0'; i++)
            {
                lenght2++;
            }
            printf("length of \"%s\" is %d.",note2,lenght2);
            break;
        case 2:
            for(int i=0; note1[i]!='\0'; i++)
            {
                length1++;
            }
            j=length1-1;
            for(i=0; i<length1; i++)
            {
                reversed_note1[i]=note1[j];
                j--;//from last chracter and coming to begnning

            }
            fflush(stdin);
            printf("\nreversed note 1 is: %s",reversed_note1);
            fflush(stdin);

            for(int j=0; note2[j]!='\0'; j++)
            {
                lenght2++;
            }
            j=lenght2-1;
            for(i=0; i<lenght2; i++)
            {
                reversed_note2[i]=note2[j];
                j--;
            }
            fflush(stdin);
            printf("\nreversed note 2 is:");
            fflush(stdin);
            puts(reversed_note2);
            break;
        case 3:
            for(int i=0; note1[i]!='\0'||note2[i]!='\0'; i++)
            {
                if(note1[i]!=note2[i]||note1[i]=='\0'||note2[i]=='\0')
                {
                    f=1;//strings are not same

                }

            }
            if(f==0)
            {
                printf("\n\"%s\" and \"%s\" are same.\n",note1,note2);
            }
            else
            {
                printf("\n\"%s\" and \"%s\" are not same.\n",note1,note2);
            }
            break;
        case 4:
            for(i=0; note1[i]!='\0'; i++)
            {
                copied_note1[i]=note1[i];
            }
            printf("copied note1 is:");
            fflush(stdin);
            puts(copied_note1);
            for(i=0; note2[i]!='\0'; i++)
            {
                copied_note2[i]=note2[i];//copying one-one character

            }
            printf("copied note2 is:");
            fflush(stdin);
            puts(copied_note2);
            break;
        case 5:
            for(i=0; note1[i]!='\0'; i++)
            {
                concatinated_string[i]=note1[i];
            }
            concatinated_string[i]=' '; //space between strings
            for(j=0; note2[j]!='\0'; j++)
            {
                concatinated_string[i+j+1]=note2[j];
            }
            printf("concatinated string is \n");
            fflush(stdin);
            puts(concatinated_string);
            break;



        }
        if(choice==0)
        {
            printf("exciting the program.\n24CE016_Palak Bhut");
            return 0;
        }
    }
    printf("24CE016_Palak Bhut");

}


