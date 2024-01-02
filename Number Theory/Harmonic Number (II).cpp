#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0,RootValue,k;
        cin>>n;
        cout<<"Case "<<no<<": ";
        no++;
        RootValue=sqrt(n);
        for(long long int i=1; i<=RootValue; i++)
        {
            sum+=n/i;
            k=n/i;
        }
        for(long long int i=k; i>1; i--)
        {
            sum+=((n/(i-1))-(n/i))*(i-1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
