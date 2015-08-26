/* PIE */
/* Sushant Gupta */

#include<bits/stdc++.h>
/*#include<stdio.h>
#include<iostream>
#include<algorithm> */
using namespace std;
double pi = 3.14159265358979323846264338327950;
int n,f;

int check( double x, double *a)
{
    int i,c=0;
    if(x==0)
        return 0;
    for(i=0;i<n;i++)
        c += a[i]/x;
    if(c>=f)
        return 1;
    else
        return 0;
}

 double bs( double *ar)
{
    double f = 0.0, l = ar[n-1], mid;




    while(l-f >= 1e-6)
    {
        if(f>=l)
            break;

        mid = (l+f)/2.0;
        if(check(mid,ar)==1)
             f = mid;
        else
            l = mid;
    }
    return f;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&f);
        double  a[n];
        int d;
        f = f+1;
        int i;

        for(i=0;i<n;i++)
        {

            scanf("%d",&d);
            a[i] = d*d*pi;

        }
        sort(a,a+n);
         double ans = bs(a) ;
        printf("%.4lf\n",ans);

    }
    return 0;
}
