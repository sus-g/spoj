/* Amazing Factor Sequence */
/* Sushant Gupta */

#include<stdio.h>
#define n 1000001
/*long long int n = 1000001;
long long int fac[n];
void afs()
{

    fac[0] = fac[1] = 0;
    int i,j, c;
    for(i=2;i<n;i++)
    {
        long long int s=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                s = s +j;
                s = s + i/j;
                if(i/j ==j)
                    s = s - j;
            }
            fac[i] = s + fac[i-1];
        }
    }

} */
int main()
{

    long long int fac[n];

    fac[0] = fac[1] = 0;
    fac[2]= 1; fac[3] = 2;
    int i,j, c;
    for(i=4;i<n;i++)
    {
        long long int s=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                s = s +j;
                s = s + i/j;
                if(i/j ==j)
                    s = s - j;
            }
            //printf("s = %lld\n",s);  //check
            fac[i] = s + fac[i-1];
        }
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        printf("%lld\n",fac[x]);
    }
    return 0;
}
