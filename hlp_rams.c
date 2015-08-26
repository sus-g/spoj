/* Topper Rama Rao */
/* Sushant Gupta */
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,odd,x,c=0;;
        scanf("%lld",&n);
        x=n;
        if(n==0)
            printf("0 1\n");
        else
        {
            while(n>0) {
                if(n&1==1)
                    c++;
               n=  n>>1;
            }
            odd = pow(2,c);
            printf("%lld %lld\n",x+1-odd,odd);


        }


    }
    return 0;
}
