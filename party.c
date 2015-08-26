/* Party Schedule */
/* -Sushant Gupta */

#include<stdio.h>
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int budg=1,n=1;
   // while(budg!=0 && n!=0)
    //{
        scanf("%d%d",&budg,&n);
      //  if(budg!=0 && n!=0)
        //{
            int pr[n],f[n],k[n+1][budg+1],i,j;
            for(i=0;i<n;i++)
            {
                //scanf("%d%d",&pr[i],&f[i]);
                   scanf("%d%d",&f[i],&pr[i]);
            }
            for(i=0;i<=n;i++)
            {
                for(j=0;j<=budg;j++)
                {
                   if(i==0 || j==0 )
                     k[i][j]= 0;
                   else if(pr[i-1] <= j)
                       k[i][j] = max(f[i-1] + k[i-1][j - pr[i-1]],k[i-1][j]);
                  else
                    k[i][j] = k[i-1][j];
                }
            }

            int fun = k[n][budg];
           /* int price;
            for(i=0;i<=budg;i++)
            {
                   if(k[n][i] == fun)
                   {
                       price = i;
                       break;
                   }
            } */

         //  printf("%d %d\n",price,fun);
         printf("%d",fun);

        //}
    //}
    return 0;
}
