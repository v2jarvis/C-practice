#include<stdio.h>
#define pi 3.14
int main()
{
    float r,a,c;
    printf("Enter radius of circle ");
    scanf("%f",&r);
    a=pi*r*r;
    printf("\nArea of circle=%f\f",a);
    c=2*pi*r;
    printf("\nCircumfrence od circle %f",c);
    return 0;
}
