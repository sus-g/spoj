/* In Danger */
/* Sushant Gupta */

#include<stdio.h>
#include<math.h>
int main()
{
    char a[10];
    scanf("%s",a);
    printf("Heloo\n"); //check
    printf("a[0]= %d a[1]= %d", a[0]-'0', a[1]-'0') ; //check

    while(a[0]!='0' && a[1]!= '0')
    {
        printf("Enter\n");  //check
        long long int x;
        x = 10 * (a[0] - '0') + (a[1]- '0');
        x = x * pow(10, (a[3]- '0'));
        int m;
        m = log2(x);
        long long int n;
        n = pow(2,m);
        long long int ans;
        ans = 2*(x - n) + 1;
        printf("%lld\n",ans);
        scanf("%s",a);
    }
    if(a[0]!= '0' && a[1]!= '0')
    {

       printf("Exit"); //check
       return 0;
    }
}
