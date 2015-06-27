/* Training Land Of Fury */
/* -Sushant Gupta */

#include<stdio.h>
#include<math.h>

int main()
{
    int i,a[1001],j;
    for(i=2;i<1001;i++)
        a[i]= 1001;
    a[0]= 0;
    a[1]=1;
    for(i=2;i<1001;i++)
    {
        for(j=sqrt(i);j>=1;j--)
        {
            if((i-(j*j)>=0)&& (a[i]> 1+ a[i-j*j]))
                a[i]= 1 + a[i-j*j];

        }
    }
     int t;
     scanf("%d",&t);
     while(t--)
     {
         int n;
         scanf("%d",&n);
         printf("%d\n",a[n]);
     }

    return 0;
}
