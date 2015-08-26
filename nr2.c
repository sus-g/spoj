/* Bhagat the Bit Man */
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int ans=0, temp, an;
    an = ~0LL;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&temp);
        ans = ans | temp;
        an = an & temp;
    }
    ans = ans - an;
    printf("%lld",ans);

    return 0;
}
