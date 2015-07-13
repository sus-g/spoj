/* Hard Launching */
/* Sushant Gupta */


#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
int t,ta,sp,i=1;
float g=9.806,pi,s,ans;
pi=2*acos(0.0);

cin>>t;
while(t--)
{
cin>>ta>>sp;
s=ta*g/(sp*sp);

if(s<=1)
{ans = asin(s)*180.0 / pi;

printf("Scenario #%d: %.2f\n",i++,ans/2);}
else
 printf("Scenario #%d: -1\n",i++);
}
return 0;
}



