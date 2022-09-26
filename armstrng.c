#include<stdio.h>
int main()
{
    int r,num,sum=0,temp;
    printf("Enter number to check armstrng or not : ");
    scanf("%d",&num);
    temp=num;
  while(num!=0)
    {
        r=num%10;
        sum=sum+r*r*r;
        num=num/10;
    }
    if(temp==sum)
        printf("yes");
    else
    {
        printf("no");
    }
    return 0;
}
