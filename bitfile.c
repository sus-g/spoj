/* Play WIth Bits */
/* Sushant Gupta */

#include<stdio.h>
#include<math.h>

int count(long long int n)
{
    int c=0;
    while(n>0)
    {
        if(n&1)
            c++;
         //printf("n check = %d\n",n&1);  //check
        n = n>>1;

    }
    return c;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        int k,m;
        scanf("%lld%d",&n,&k);
        m = log2(n);
        if(k==0)
            printf("-1\n");
        else if(k==1)
            printf("1\n");
        else if(k>=m)
            printf("%lld\n",n-1);
        else
        {
              long long int i, ans,x;
              x = 1<<m;
            //  printf("m = %d x = %lld\n",m,x);  // check
              for(i=n-1; i>x; i=i-2) {
                    //printf("count =  %d\n",count(i));

                if(count(i)== k)
              {
                  ans = i;
                //printf("i= %lld\n",i);   //check
                  break;
              }
              }
              printf("%lld\n",ans);

        }
    }
    return 0;
}
