#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m,sum,sub;
    float i,j,s,su;
    scanf("\n%d %d", &n, &m);
    scanf("\n%f %f", &i, &j);
    sum=n+m; sub=n-m;
    s=i+j; su=i-j;
    printf("\n%d %d",sum,sub);
    printf("\n%.1f %.1f",s,su);
    return 0;
}
