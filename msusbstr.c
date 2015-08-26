/* Mirror Substrings */
/* Sushant Gupta */

#include<stdio.h>
#include<string.h>

void lps(char *a, int n)
{
    int p[n],i,j,k;
    p[0] = 1;
    for(i=1;i<n;i++)
    {
        p[i]=1;
        j=i-1;
        k=i+1;
        while(j>=0 && k<n)
        {
            if(a[j--] == a[k++])
            {


                    p[i]+=2;
            }
            else break;
        }
    }
    for(i=1;i<n;i++)
    {
        int c=0;
        j=i-1;
        k= i;
        while(j>=0 && k<n)
        {
            if(a[j--] == a[k++])
            {

                 c=c+2;

            }
            else break;
        }
        if(c>p[i])
            p[i] = c;
    }
     int c=0,max = p[0];
    for(i=1;i<n;i++)
    {
        if(p[i]>max)
            max = p[i];
       // printf("a[%d] = %c\t",i,a[i]);
        //printf("p[%d] = %d\n",i,p[i]);
    }

    for(i=0;i<n;i++)
    {
        if(p[i]==max)
            c++;
        printf("a[%d] = %c \t p[%d] = %d\n",i,a[i],i,p[i]);  //check
    }

    printf("%d %d\n",max,c);


}
int main()
{
    char s[350];
    int t;
    scanf("%d",&t);
    while(t--)
    {


       scanf("%s",s);
       int i= strlen(s);
        lps(s,i);


    }
    return 0;
}
