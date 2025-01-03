#include<stdio.h>
struct Coach
{
    char name[30];
    int age;
    float experience;
};
struct Team
{
    char teamname[35];
    char sporttype[40];
    struct Coach coach; //nested structure
};
//function to add team
int addTeam(struct Team teams[],int teamcount)
{

    printf("enter team name: ");
    fflush(stdin);
    gets(teams[teamcount].teamname);
    printf("enter sport type: ");
    fflush(stdin);
    gets(teams[teamcount].sporttype);
    printf("enter the coach name: ");
    fflush(stdin);
    gets(teams[teamcount].coach.name);
    printf("enter coach age: ");
    fflush(stdin);
    scanf("%d",&teams[teamcount].coach.age);
    printf("enter coach experience: ");
    fflush(stdin);
    scanf("%f",&teams[teamcount].coach.experience);
    return teamcount+1;
}
//function to display team
void displayTeams(struct Team teams[],int teamcount)
{
    if(teamcount==0)
    {
        printf("\n\nno team available to display.");
        return;
    }
    printf("\n team list -----");
    for(int i=0; i<teamcount; i++)
    {
        printf("\nteam %d is :",i+1);
        printf("\nteam name is %s.",teams[i].teamname);
        printf("\nsport of the team is %s.",teams[i].sporttype);
        printf("\ncoach name is %s.",teams[i].coach.name);
        printf("\ncoach age is %d.",teams[i].coach.age);
        printf("\ncoach experience is %f.",teams[i].coach.experience);
    }
}
//function to search team
void search_Teams(struct Team teams[],int teamcount)
{
    if(teamcount==0)
    {
        printf("no team is available for search");
        return;
    }
    printf("enter search name:");
    char searchname[35];
    fflush(stdin);
    gets(searchname);
    int found=0;
    for(int i=0; i<teamcount; i++)
    {
        if(strcmp(teams[i].teamname,searchname)==0)
        {
            found==1;
            printf("\nteam %d is :",i+1);
            printf("\nteam name is %s.",teams[i].teamname);
            printf("\nsport of the team is %s.",teams[i].sporttype);
            printf("\ncoach name is %s.",teams[i].coach.name);
            printf("\ncoach age is %d.",teams[i].coach.age);
            printf("\ncoach experience is %f.",teams[i].coach.experience);

        }
        if(found==0)
        {
            printf("\nno such team is found.");
        }

    }
}
void main()

{
    struct Team teams[30];
    int teamcount=0;
    int choice;
    do
    {
        printf("\n\nEnter 1 to 4");
        printf("\n enter 1 to add teams.");
        printf("\n enter 2 to display the teams.");
        printf("\n enter 3 to search the teams.");
        printf("\n enter 4 to exit the program\n.");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            teamcount=addTeam(teams,teamcount);
            break;
        case 2:
            displayTeams(teams,teamcount);
            break;
        case 3:
            search_Teams(teams,teamcount);
            break;
        case 4:
            printf("\n exiting the program\n.");
            break;

        }
    }
    while(choice!=4);
printf("24DCE009_Niyati Barochia");
}
