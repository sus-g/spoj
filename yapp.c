/* Yet Another Permutation Problem */
/* Sushant Gupta */

#include<stdio.h>


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,ans=1,mod =  1000000007,a=2;
        scanf("%lld",&n);
        n=n-1;
        if(n==0)
            printf("1\n");
        else
        {
            while(n>0)
            {
                if(n&1)
                    ans = ans * a % mod;
                a = a*a % mod;
                n= n>>1;

            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
