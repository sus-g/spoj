/*Ontotoloe needs your help - (OLOLO) */
/* sushant zgupta */

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int a[n],k;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    for(i=0;i<n;i=i+2)
    {
        if(a[i]!=a[i+1])
        {
            k=a[i];
            break;
        }
    }
     printf("%lld",k);
     return 0;
}
