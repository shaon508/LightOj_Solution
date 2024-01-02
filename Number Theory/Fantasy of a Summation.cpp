#include<bits/stdc++.h>
using namespace std;
long long int mod;
long long int BigMod(long long int n,long long int p)
{
    if(p==0)return 1;
    if(p%2==0)
    {
        long long int part;
        part=BigMod(n,p/2);
        return ((part%mod)*(part%mod))%mod;
    }
    else
    {
        return (((n%mod)*(BigMod(n,p-1)%mod))%mod);
    }
}
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,k,m,sum=0,ans=0;
        cin>>n>>k>>m;
        mod=m;
        int array[n+5];
        for(int i=0; i<n; i++)cin>>array[i];
        cout<<"Case "<<no<<": ";
        no++;
        sum=BigMod(n,k-1);
        sum=(sum*k);
        for(int i=0; i<n; i++)
        {
            ans+=((sum%m)*array[i])%m;
        }
        cout<<ans%m<<endl;
    }
    return 0;
}
