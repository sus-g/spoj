/* SPOJ - Traversing Grid (TRGRID)
         - Sushant Gupta   */

#include<stdio.h>
int main()
{
    int t;
    long long int n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        if(n%2==1)
        {
            if(m%2==1)
            {
                if(n>m)
                    printf("D\n");
                else
                    printf("R\n");
            }
            else
            {
                if(n>m)
                    printf("U\n");
                else
                    printf("R\n");
            }
        }
        else
        {
            if(m%2==0)
            {
                if(n<=m)
                    printf("L\n");
                else
                    printf("U\n");
            }
            else
            {
                if(n<m)
                    printf("L\n");
                else
                    printf("D\n");
            }
        }

    }
    return 0;
}
