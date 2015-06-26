/* Street Trees (STREETR) */
/* -Susahnt Gupta */

#include<stdio.h>
long long int gcd(long long int a, long long int b)
{
    if(b>a)
        return gcd(b,a);
     else if(b!=0)
            return gcd(b,a%b);
    else
        return a;
}

int main()
{
    int t,i;
    scanf("%d",&t);
    long long int a[t],h,diff,s=0;
    for(i=0;i<t;i++)
        scanf("%lld",&a[i]);
     h= a[1]-a[0];
    for(i=1;i<t;i++)
    {
        diff= a[i]- a[i-1];
        h= gcd(diff,h);
    }

    for(i=1;i<t;i++)
    {
        diff= a[i]- a[i-1];
        s= s+ (diff/h)- 1;
    }
    printf("%lld\n",s);
    return 0;
}
