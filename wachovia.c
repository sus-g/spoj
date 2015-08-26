/* Wachovia Bank */
/* Sushant Gupta */

#include<stdio.h>
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k,m;
        scanf("%d%d",&k,&m);
        int a[m],b[m],dp[m+1][k+1],i,j;
        for(i=0;i<m;i++)
            scanf("%d%d",&a[i],&b[i]);
         for (i = 0; i <= m; i++)
   {
       for (j = 0; j <= k; j++)
       {
           if (i==0 || j==0)
               dp[i][j] = 0;
           else if (a[i-1] <= j)
                 dp[i][j] = max(b[i-1] + dp[i-1][j-a[i-1]],  dp[i-1][j]);
           else
                 dp[i][j] = dp[i-1][j];
       }
   }
   printf("Hey stupid robber, you can get %d.\n",dp[m][k]);
    }
    return 0;
}
