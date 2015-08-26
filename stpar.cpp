/* Street Parade */
/* Sushant Gupta */

#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n=1;
    while(n!=0)
    {
        scanf("%d",&n);
        if(n!=0)
        {
            int a[n],i, check =1;
            stack <int> ar;
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            int f =1;
            for(i=0;i<n;i++)
            {
                while(!ar.empty() && ar.top() == check)
                   {

                       check++;
                       ar.pop();
                   }
                if(check == a[i])
                    check++;
                else if(!ar.empty() && ar.top()< a[i])
                {
                    f=0;
                    break;
                }
                else
                    ar.push(a[i]);
            }
            if(f==1)
                printf("Yes\n");
            else
                printf("No\n");

        }
    }
    return 0;
}
