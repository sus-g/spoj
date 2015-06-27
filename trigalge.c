/* Easy Calculation */
/*Sushant Gupta */

#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);

     double x, n_x, fn, dfn;


     n_x = c;

     do {
          x = n_x;
          fn = a*x + b*sin(x)- c ;
          dfn = a + b*cos(x);
          n_x = x - fn / dfn;

     }  while ((x - n_x) >= 0.0001 || (x - n_x) <= -0.0001);

     printf("%.6lf\n", n_x);
    }
    return 0;
}
