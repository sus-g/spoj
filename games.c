/* How Many Games */
/*  Sushant Gupta */

#include<stdio.h>
#include<string.h>
#include<math.h>

long long int gcd(long long int a,long long int b)
{
    if(b>a)
        return gcd(b,a);
    else if (b!=0)
       return gcd(b, a%b);

    else
       return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[20];
        int n,i;
        scanf("%s",a);
        n = strlen(a);
        int c=1;
        long long int num=0,h,den=1;
        for(i=0;i<n;i++)
        {
            if(a[i] !='.')
                c++;
            else if(a[i]=='.')
                break;
        }
        c = n-c;
        if(c==-1)
            printf("1\n");
        else {

        for(i=0;i<c;i++)
            den  = den *10;

        for(i=0;i<n;i++)
        {
            if(a[i] !='.')
                num = num *10 + (a[i] - '0') ;
        }

        h = gcd(num,den);
        h = den/h;
        printf("%lld\n",h);
        }
    }
    return 0;
}
