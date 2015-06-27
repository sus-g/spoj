/* Decipher (ROOTCIPH) */
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,d;
        scanf("%lld%lld%lld",&a,&b,&c);
        d= a*a - 2*b;
        printf("%lld\n",d);

    }
    return 0;
}
