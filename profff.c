/*   */
/* Sushant Gupta */

#include<stdio.h>
#include<string.h>
int main()
{
  /*  char s1[15], s2[15];

    s1[0] = '1';
    s2[0] = '1';
    while(1)
    {
        int s,c=0,f=0;
        scanf("%s%s",s1,s2);

        if(s1[0]== '0' && s2[0]=='0')
            return 0;
        else
        {
            int n1 = strlen(s1) -1;
            int n2 = strlen(s2) -1;
            while(n1 || n2)
            {
                s = (s1[n1] - '0') + (s2[n2] - '0');
               printf("n1 = %d n2 = %d\ns1 = %c s2 = %c\n",n1,n2,s1[n1],s2[n2]);  //check
                if(s>9)
                {
                    c++;
                    f=1;
                }
                else if(s==9)
                {
                    if(f==1)
                    {
                        c++;
                        f=1;
                    }
                    else
                        f=0;
                }
                else
                    f=0;
                n1--; n2--;
            }
            if(n2 == -1)
            {
                while(n1 != -1)
                {
                    printf("Loop is on \n");  //check
                    if(f==1)
                    {
                        if(s1[n1] == '9')
                        {
                            c++;
                            f=1;
                        }
                        else
                            f=0;
                    }
                    else
                        break;
                    n1--;
                }
            }
            else if(n1 == -1)
            {
                while(n2 != -1)
                {
                    if(f==1)
                    {
                        if(s2[n2] == '9')
                        {
                            c++;
                            f=1;
                        }
                        else
                            f=0;
                    }
                    else
                        break;
                    n2--;
                }
            }
            if(c==0)
                printf("No carry operation.\n");
            else if(c==1)
                printf("1 carry operation.\n");
            else
                printf("%d carry operations.\n",c);

        }

    } */
    long long int x1=1,x2=1,n1,n2;
    while(1)
    {
        scanf("%lld%lld",&x1,&x2);
        if(x1==0 && x2==0)
            return 0;
        else
        {
            n1 = x1;
            n2 = x2;
            int s=0,c=0;

            while(n1 || n2)
            {
                s = ((n1 %10) + (n2 %10) + s >=10);

                c = c+s;
                n1 = n1/10;
                n2 = n2/10;
                /*if(s>9)
                {
                    c++;
                    f=1;
                }
                else if(s==9)
                {
                    if(f==1)
                        c++;
                    else
                        f= 0;
                }
                else
                    f= 0; */
            }
            if(c==0)
                printf("No carry operation.\n");
            else if(c==1)
                printf("1 carry operation.\n");
            else
                printf("%d carry operations.\n",c);


        }
    }


}
