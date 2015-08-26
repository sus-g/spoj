/* Triangle from Centroid */
/* Sushant Gupta */

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
       long double a,ga,gb,gc,b,c,s,ar,dis,r;
        scanf("%lf%lf%lf%lf",&a,&ga,&gb,&gc);
         b=a*ga/gb;
        c=a*ga/gc;
        s=(a+b+c)/2;
        ar=sqrt(s*(s-a)*(s-b)*(s-c));
        r=a*b*c/4/ar;

        dis=2*(sqrt(9*r*r-a*a-b*b-c*c))/3;
        printf("%.3lf %.3lf\n",ar,dis);

    }
    return 0;
}
