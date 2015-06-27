/* Touch Of Venom (VENOM) */
/* - Sushant Gupta  */

#include <stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int h,p,a;
        scanf("%d%d%d",&h,&p,&a);
        if(h<=p)

            printf("1\n");
        else {

          double y,z,d;
           long long int ans=0;
           y= p - 2*a;
           z= 2*(a-h);
           d= sqrt(y*y - 4*p*z);
            ans = ceil((-1*y + d)/(2*p));
           ans = 2*ans - 1;
           printf("%lld\n",ans);
        }
    }
    return 0;
}

