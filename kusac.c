/* Kusac */
/* Sushant Gupta */

#include<stdio.h>
int div(int n,int m)
{
    int c=0,i,j;
    if(n==0 || m==0)
        return 0;
    if(n == m)
        return 0;
    if(n % m == 0)
        return 0;
    if(n>m)
        return div(n-m,m);
    else
    {
        j = n*m;
        for(i=n;i<j;i= i+n)
        {
            if(i%m!=0)
                c++;
        }
        return c;
    }

}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d",div(n,m));
    return 0;
}
