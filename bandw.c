/* Black And White */
/* Sushant Gupta */

#include<stdio.h>
#include<string.h>
int main()
{
    char s[600],t[600];
    int i;
    s[0]= '0';

    while(s[0]!= '*')
    {
        scanf("%s%s",s,t);
        if(s[0]!= '*')
        {
            int n,c=0;
            n = strlen(s);
            i=0;
            while(i<n)
            {
                if(s[i]!=t[i]) {
                while(s[i]!=t[i])
                    i++;
                c++;}
                while(s[i]==t[i])
                    i++;
            }
            printf("%d\n",c);
        }
        else
            return 0;
    }
}
