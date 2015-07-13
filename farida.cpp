/* Princess Farida */
/* Sushant Gupta */

#include<iostream>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        long long int a[n],b[n],max=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]= 0;
        }
        b[0]= a[0];
        b[1]= a[1];
        for(i=2;i<n;i++)
        {
            for(j=0;j<i-1;j++)
            {
                if(b[i]< b[j] + a[i])
                    b[i]= b[j] + a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(max< b[i])
                max = b[i];
        }
        cout<<"Case "<<k++<<": "<<max<<endl;
    }

    return 0;
}

