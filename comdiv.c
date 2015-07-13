/* SPOJ - Number Of Common Divisors (COMDIV)
         - Sushant Gupta   */

#include<stdio.h>

int hcf(int n1, int n2)
{
    if(n2>n1)
        return hcf(n2,n1);
    else if (n2!=0)
       return hcf(n2, n1%n2);

    else
       return n1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c=0,i,h;
        scanf("%d%d",&a,&b);
        h= hcf(a,b);
        for(i=1;i*i<=h;i++)
        {
            if(h%i==0)
                c=c+2;

        }
        i=i-1;
        if(i*i==h)
            c--;
        printf("%d\n",c);

    }
    return 0;
}
