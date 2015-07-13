/* War - (TAP2013G) */
/* Sushant Gupta */

#include<stdio.h>
#include<algorihtm.h>

int bin_search(long long int d, int s, long long int *array) {
      int f, l, m, found;
      f = 0; l = s - 1; found = 0;
      while (f <= l) {
            m = (f + l) / 2;
            if (d < array[m]) l = m - 1;

                    else if (d > array[m]) {
                           found = 1;
                           array[m]= 2000000000;
                            break;
                    };
      }
      if (found)
       return 1;
      else return 0;
}

int main()
{
    int n,i,c=0,k;
    scanf("%d",&n);
    long long int q[n],s[n];
    for(i=0;i<n;i++)
        scanf("%lld",&q[i]);
    for(i=o;i<n;i++)
        scanf("%lld",&s[i]);
    sort(q,q+n);
    sort(s,s+n);
    for(i=0;i<n;i++)
    {
        k= bin(s[i],n,q);
        if(k==1)
            c++;
    }
    printf("%d",c);
    return 0;
}
