/* Mohib and the Series */
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,avg,n,sum;
        scanf("%d%d",&x,&avg);
        n = avg - x;
        sum = (avg + 1) * n;
        sum = sum - (n*(n-1)/2);
        printf("%d\n",sum);
    }
    return 0;
}
