/* Special Numbers */
/* Sushant Gupta */

long long unsigned ncr(int  x)
{
    if(x%2==0)
        return 0;
    else
    {
        int i,k = x/2;
        if(k>x-k)
            k= x-k;
        long long unsigned res=1;
        for(i=0;i<k;i++)
        {
            res = res * (x-i);
            res = res/ (i+1);
        }
        return res;
    }
}
#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
     long long unsigned a[60][2];
    a[0][0] = 2;
    a[0][1] = 1;
    a[1][0] = 4;
    a[1][1] = 1;
    for(i=2;i<60;i++)
    {
        a[i][0] = a[i-1][0] * 2;
        a[i][1] = a[i-1][1] + ncr(i);

    }
    while(t--)
    {
        long long unsigned n;
        scanf("%llu",&n);
        int i;
        for(i=0;i<60;i++)
        {
            if(a[i][0]==n)
            {
                printf("%lld\n",a[i][1]);
                break;
            }
        }

    }
    return 0;
}
