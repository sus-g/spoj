/* White Hats */
/* Sushant Gupta */

#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int i,ans,a[n],c1=0,c2=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    if(a[n-1] > n-1)
    {

          printf("-1");
            return 0;
    }
    else if(a[n-1] == a[0] && a[0]== n-1)
    {
        printf("%d",n);
        return 0;
    }
    else {
            ans = a[n-1];
            c1 = ans;
            c2 = n - ans;
          for(i=n-1;i>=0;i--)
          {
                         if(a[i] == ans)
                            c2--;
                         else if(a[i] == ans-1)
                            c1--;
          }
          if(c1 ==c2  && c2 == 0 )
          {
              printf("%d",ans);
              return 0;
          }
          else
          {
              printf("-1");
              return 0;
          }
    }
}
