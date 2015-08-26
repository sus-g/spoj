/* Working in Beijing */
/* Sushant Gupta */

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,f,s;
        scanf("%lld%lld%lld",&n,&f,&s);
        long long int a[n],i,ans;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        ans = f + f + s;
        for(i=n-2;i>=0;i--)
        {
            ans += s + min(f*2, s*(a[i+1]-a[i]-1));
        }
        printf("Case #%d: %lld\n",c++,ans);
    }
    return 0;
}
