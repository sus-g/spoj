/* Sum - (UCBINTA) */
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n], b[n],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    if(n==2)
        printf("%d %d",a[0][1]/2,a[0][1]/2);
    else
    {
        for(i=1;i<n-1;i++)
            b[i]= (a[0][i] + a[i][n-1] - a[0][n-1]);
        b[0]= a[0][1]- b[1];
        b[n-1]= a[0][n-1] - b[0];
        for(i=0;i<n;i++)
            printf("%d ",b[i]);
    }
    return 0;
}
