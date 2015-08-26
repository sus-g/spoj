/*Parket1 */
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    long long int i,b,r,l,w,n;
    scanf("%lld%lld",&r,&b);
    long long int sum = r+b;
    for(i=1;i*i<=b;i++)
    {
        if(b%i==0)
        {
            w = b/i + 2;
            l = i + 2;
            if(l*w == sum)
                break;
        }
    }
    printf("%lld %lld",w,l);
    return 0;
}
