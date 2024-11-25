#include<stdio.h>
void main()
{
    int matchSticks=21,user_sticks,comp_sticks;
    label1:while(matchSticks!=1)
    {
        printf("\nuser choose no. of sticks to pick :");
        scanf("%d",&user_sticks);
        if(user_sticks!=1&&user_sticks!=2&&user_sticks!=3&&user_sticks!=4)
        {
            printf("enter no.from 1-4 only");
            goto label1;
        }
        comp_sticks=5-user_sticks; //5*4=20 and thus 1 left will be of user.
        printf("\ncomputer choose no. sticks to pick :%d",comp_sticks);
        matchSticks=matchSticks-(comp_sticks+user_sticks);
        if(matchSticks==1)
        {
            printf("\noopss user lost the game:(");
        }
    }
    printf("\n24CE016_Palak Bhut");
}
