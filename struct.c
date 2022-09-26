#include<stdio.h>
  struct student{
        char name[128];
        int phy;
        int che;
        int math;};
int main()
{
    unsigned int n,i;
    // making a structure
    struct student entry[3];
    //taking input from the user
    printf("\n ENTER NUMBER OF STUDENT :- ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\n ENTER STUDENT NAME :- ");
        scanf("%s ",&entry[i].name);
        //phy
        printf("\n ENTER MARKS OF PHYSICS :- ");
        scanf("%d ",&entry[i].phy);

        if(0<=entry[i].phy<=100)
        {

        }
        else
        {
            printf("\n MARKS IS TOO LOW OR TOO HIGH");
        }
        //che
        printf("\n ENTER MARKS OF CHEMISTRY :-" );
        scanf("%d ",&entry[i].che);
        if(0<=entry[i].che<=100)
        {

        }
        else
        {
            printf("\n MARKS IS TOO LOW OR TOO HIGH");
        }
        //math
        printf("\n ENTER MARKS OF MATHS :- ");
        scanf("%d ",&entry[i].math);
        if(0<=entry[i].math<=100)
        {

        }
        else
        {
            printf("\n MARKS IS TOO LOW OR TOO HIGH");
        }
    }

    for (i=0;i<n;i++)
    {
        printf(" \n %s %d %d %d",entry[i].name,entry[i].phy,entry[i].che,entry[i].math);
    }
}
