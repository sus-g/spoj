/* Delicious Pancakes */
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    int n=1,r=1;
    while(1)
    {
           scanf("%d%d",&n,&r);
           if(n==0 && r==0)
            return 0;
           else
           {
               int a[n], b[r][n],i,j;
               for(i=0;i<n;i++)
                scanf("%d",&a[i]);
               for(i=0;i<r;i++)
               {
                   for(j=0;j<n;j++)
                    scanf("%d",&b[i][j]);
               }
               int max_r, max_ans=0,rec = 1,pos,temp=0;
               for(i=0;i<r;i++)
               {
                   max_r = 0;
                   for(j=0;j<n;j++)
                   {
                       if(b[i][j]>max_r) {
                        max_r  =b[i][j];
                        pos =j;
                       }
                   }
                   if(max_r)
                      temp = a[pos] * 10/max_r;
                   if(temp> max_ans)
                   {
                       max_ans = temp;
                       rec = i+1;
                   }

               }
               printf("%d %d\n",rec,max_ans);
           }

    }
    return 0;
}
