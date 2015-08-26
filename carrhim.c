/* Can You Play Carrom */
/* Sushant Gupta */

#include<stdio.h>
int main()
{
    char s[10],p1,red = 'Z';
    int w,b,r,t1=0,t2=0,c=0,ans;
    while(scanf("%s",s)!= EOF)
    {
        //scanf("%c",&s);
        //printf("s = %s\n",s);

        //printf("s = %c\n",s);

        if(s[0] != '#')
        {
            scanf("%d%d%d",&w,&b,&r);
            if( c == 0)
                p1 = s[0];
            c = 1;
            if(r == 1)
                red = s[0];
            if(p1 == 'B' || p1 == 'D')
            {
                t1 += b;
                t2 += w;

              // printf("C1\n"); //check
            }
            else
            {
                t2 += b;
                t1 += w;
                //printf("C2\n"); //check
            }
            //printf("t1 =  %d  t2 = %d\n",t1,t2);  //check

        }
        if(s[0] == '#')
        {
            if(t1 == 9 && red!='Z' )
            {   ans = 0;
                if(red == 'A' || red == 'C')
                    ans = 5;
                ans = ans + 9 - t2;
                printf("Team-1 win and the point is %d.\n",ans);
            }
            else if(t2 == 9 && red!= 'Z')
            {    ans =0;
                 if(red == 'B' || red == 'D')
                    ans = 5;
                ans = ans + 9 - t1;
                printf("Team-2 win and the point is %d.\n",ans);
            }
            else
                printf("Incomplete game.\n");
            t1 = 0;
            t2 = 0;
            c = 0;
            red = 'Z';
        }
    }
    return 0;
}
