/* Defense of a Kingdom */
/* Sushant Gupta */

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--);
    {
        int w,h,n,i;
        scanf("%d%d%d",&w,&h,&n);
        int x[n+1], y[n+1];

        x[n] = w+1;

        y[n] = h+1;
        for(i=0;i<n;i++)
            scanf("%d%d",&x[i],&y[i]);
        sort(x,x+n);
        sort(y,y+n);
        int m=0, k=0;
        for(i=1;i<=n;i++)
            {
                m = max(m,x[i] - x[i-1]);
                 printf("x= %d  y= %d\n",x[i],y[i]);
            }
        for(i=1;i<=n;i++)
            k = max(k,y[i] - y[i-1] );
        long long int ans = (m-1) * (k-1);
        printf("%lld\n",ans);
    }
    return 0;
}
