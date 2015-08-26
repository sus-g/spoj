/* Pebble Solver */
/* Sushant Gupta */


#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int t=1;
    while(cin>>s)
    {
        int n;
        n = s.size();
        int i=0,j=0,c=0;
        while(s[i]!='1')
            i++;
        while(i<n)
        {
            if(s[i]=='1')
            {
                while(s[i]=='1')
                    i++;
                c++;
            }
            if(s[i]=='0')
            {
                while(s[i]=='0')
                    i++;
                c++;
            }
        }
        cout<<"Game #"<<t++<<": "<<c<<endl;
    }
    return 0;
}
