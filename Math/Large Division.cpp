#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        long long int b,temp=0;
        string a;
        cin>>a>>b;
        if(b<0)
        {
            b=-b;
        }
        int i=0;
        if(a[0]=='-')
        {
            i=1;
        }
        for(; i<a.size(); i++)
        {
            temp=temp*10+a[i]-'0';
            temp=temp%b;
        }
        cout<<"Case "<<j<<": ";
        j++;
        if(temp==0)
        {
            cout<<"divisible"<<endl;
        }
        else
        {
            cout<<"not divisible"<<endl;
        }
    }
    return 0;
}
