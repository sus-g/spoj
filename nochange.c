/* No Change */
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    int x,k,i;



        scanf("%d",&x);

        scanf("%d",&k);

        int v[k],j;

        for(i=0;i<k;i++)
        {
            scanf("%d",&v[i]);

            if(i>0)
                v[i] = v[i] + v[i-1];



        }

       /* int f=0,j,n,y;
        n=x;
        for(i=k-1;i>=0;i--)
        {
            x = n;
            x = x % sum[i];
            if(x==0)
                {
                    f=1;
                    break;
                }

            for(j=i-1;j>=0;j--)
            {
                y = x % sum[j];
                if(y==0)
                {
                    f=1;
                    break;
                }

            }
        }
        if(f==1)
            printf("YES\n");
        else
            printf("NO\n");  */
        int ans[x+1];
        ans[0]=1;
        for(i=1;i<=x;i++)
            ans[i] = 0;
        for(i=0;i<k;i++)
        {
            for(j=v[i];j<=x;j++)
            {
                ans[j] = ans[j] | ans[j-v[i]];
            }
        }
        if(ans[x]==1)
            printf("YES");
        else
            printf("NO");

    return 0;
}
