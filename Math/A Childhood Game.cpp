#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        long long int n;
        string s;
        cin>>n>>s;
        cout<<"Case "<<i<<": ";
        i++;
        if(s[0]=='A')
        {
            if(n%3==1)
                cout<<"Bob"<<endl;
            else
                cout<<"Alice"<<endl;
        }
        else
        {
            if(n%3==0)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }
    }
    return 0;
}
