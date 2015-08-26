/* Skyline*/
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    int i,j,n = 1000, mod = 1000000;
    long  long int catalan[n+1],temp;

    // Initialize first two values in table
    catalan[0] = catalan[1] = 1;

    // Fill entries in catalan[] using recursive formula
    for ( i=2; i<=n; i++)
    {
        catalan[i] = 0;
        for ( j=0; j<i; j++)
          {

            temp = (catalan[j] ) * (catalan[i-j-1]  ) % mod;
            catalan[i] += temp;
          }
          catalan[i] = catalan[i] % mod;
    }
    int t=1;
    while(t!=0)
    {
        scanf("%d",&t);
        if(t!=0)
            printf("%lld\n",catalan[t]);
            //printf("check = %lld\n",(2 * (2*n +1) / (n+2)));
    }
    return 0;
}
