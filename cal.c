#include<stdio.h>
int main()
{
    int n1,n2,ch;
    while(1)
    {
    printf("1.ADD\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICAION\n");
    printf("4.DIVIDE\n");
    printf("5.MODULE\n");
    printf("6.SQURE\n");
    printf("7.Exit\n");
    printf("\nEnter choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:

        printf("Enter Two numbers : ");
        scanf("%d%d",&n1,&n2);
        printf("%d + %d = %d\n",n1,n2,n1+n2);
        break;

    case 2:

        printf("Enter Two numbers : ");
        scanf("%d%d",&n1,&n2);
        printf("%d - %d = %d\n",n1,n2,n1-n2);
        break;

    case 3:

        printf("Enter Two numbers : ");
        scanf("%d%d",&n1,&n2);
        printf("%d * %d = %d\n",n1,n2,n1*n2);
        break;

    case 4:

        printf("Enter Two numbers : ");
        scanf("%d%d",&n1,&n2);
        printf("%d / %d = %d\n",n1,n2,n1/n2);
        break;
    case 5:

        printf("Enter Two numbers : ");
        scanf("%d%d",&n1,&n2);
        printf("%d % %d = %d\n",n1,n2,n1%n2);
        break;
    case 6:

        printf("Enter a numbers : ");
        scanf("%d",&n1);
        printf("%d >> 2 = %d\n",n1,n1*n1);
        break;

     case 7:exit(0);

    default:printf("\nInvalid Choice !!!\n");

     }
    }

    return 0;

}

