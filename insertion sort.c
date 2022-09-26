#include<stdio.h>
int main()
{
    int a[10];
    int n=10,i,p,s,j;
    printf("Enter The Array:");
        for(i=0;i<10;i++)
    scanf("%d",&a[i]);
        for(i=0;i<(n-1);i++)
    {
        p=i;
        for(j=(i+1);j<n;j++)
        {
            if(a[p]>a[j])
            p=j;
        }
    if (p!=i)
    {
        s=a[i];
        a[i]=a[p];
        a[p]=s;
    }
    }
        for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
