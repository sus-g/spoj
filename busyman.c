/* I Am Very Busy */
/* Sushant Gupta */

#include<stdio.h>
#include<math.h>

struct time
{
    int s,e;
};

bool waytosort(struct time a, struct time b)
{
    if(a.e == b.e)
        return a.s > b.s;
    else
        return a.e < b.e;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        struct time t[n];
        for(i=0;i<n;i++)
        scanf("%d%d",&t[i].s,&t[i].e);
       /* for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(t[j].e>t[j+1].e)
                {
                    temp = t[j];
                    t[j]= t[j+1];
                    t[j+1]= temp;
                }
                else if(t[j].e == t[j+1].e)
                {
                    if(t[j].s <t[j+1].s)
                    {
                        temp = t[j];
                        t[j]= t[j+1];
                        t[j+1]= temp;
                    }
                }
            }
        } */
         sort(t,t+n,waytosort);
        int c=1;
        for(i=1;i<n;i++)
        {
            if(t[i].s>=t[i-1].e)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
