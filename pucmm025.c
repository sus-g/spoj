/* Divisor Digits */
/* Sushant Gupta */

#include<stdio.h>
#include<string.h>
int summ(char *ar,int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s=s+ (ar[i] - '0');
    return s;
}
int main()
{
    char a[2504];
    int i,j;
        int sum=0;
    while(scanf("%s",a)!=EOF)
    {
        int n,by1=0,by2=0,by3=0,by4=0,by5=0,by6=0, by7=0, by8=0, by9=0,c=0;
        n= strlen(a);
        sum = summ(a,n);
        for(i=0;i<n;i++)
        {
            if(a[i]== '1')
                c++;
            else if(a[i]== '2')
            {
                if(by2==1)
                    c++;
                else
                {
                    if((a[n-1]-'0')%2==0)
                    {
                        by2=1;
                        c++;
                    }
                }
            }
            else if(a[i]== '3')
            {
                long long int s=0;
                if(by3==1)
                    c++;
                else
                {

                    if(sum%3==0)
                    {
                        by3=1;
                        c++;
                    }
                }
            }
            else if(a[i]=='4')
            {
                int x = 10 * (a[n-2]- '0') + (a[n-1]- '0');
                if(by4==1)
                    c++;
                else
                {
                    if(x%4==0)
                    {
                        by4=1;
                        c++;
                    }
                }
            }
            else if(a[i]=='5')
            {
                if(by5==1)
                    c++;
                else
                {
                    if((a[n-1]-'0') % 5==0)
                    {
                        by5=1;
                        c++;
                    }
                }
            }
            else if(a[i]=='6')
            {
                if(by6==1)
                    c++;
                else
                {
                    if(((a[n-1]-'0')%2==0) && (sum%3==0))
                    {
                        by6 = 1;
                        c++;
                    }
                }
            }
            else if(a[i]== '8')
            {
                if(by8 ==1)
                    c++;
                else
                {
                    int x = 100 * (a[n-3] - '0') + 10* (a[n-2]-'0') + (a[n-1]-'0');
                    if(x%8==0)
                    {
                        by8=1;
                        c++;
                    }
                }
            }
            else if(a[i]=='9')
            {
                if(by9==1)
                    c++;
                else
                {
                    if(sum%9==0)
                    {
                        c++;
                        by9=1;
                    }
                }
            }
            else if(a[i]=='7')
            {
                if(by7==1)
                    c++;
                else
                {
                    long long int s =0;
                    for(j=n-1;j>=0;j=j-6)
                    {
                        if(j >= 0)
                            s+= 1 * (a[j] - '0');
                       if((j-1) >= 0)
                            s+= 3 * (a[j-1] - '0');
                        if((j-2) >= 0)
                            s+= 2 * (a[j-2] - '0');
                       if((j-3) >= 0)
                              s+= 6 * (a[j-3] - '0');
                       if((j-4) >= 0)
                               s += 4 * (a[j-4] - '0');
                       if((j-5) >= 0)
                               s+= 5 * (a[j-5] - '0');
                     }

                    if(s%7==0){
                            by7=1;
                            c++;
                    }
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
