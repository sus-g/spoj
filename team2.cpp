/* A Famous ICPC Team */
/* Sushant Gupta */

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,b,c,d,t=1;
    while(cin>>a>>b>>c>>d)
    {
        long long int ar[4];
        ar[0] = a;
        ar[1] = b;
        ar[2] = c;
        ar[3] = d;
        sort(ar,ar+4);
        cout<<"Case "<<t++<<": "<<ar[2] + ar[3]<<endl;
    }
    return 0;
}
