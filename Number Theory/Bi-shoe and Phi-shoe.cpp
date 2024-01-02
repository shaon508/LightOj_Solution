#include<bits/stdc++.h>
using namespace std;
bool Primes[5000005];
vector<long long>v;
void PrimeFactor()
{
    for(long long int i=2; i<=5000000; i++)
    {
        if(Primes[i]!=1)
        {
            v.push_back(i);
            for(long long int j=i*i; j<=5000000; j+=i)
            {
                Primes[j]=1;
            }
        }
    }
}
int main()
{
    PrimeFactor();
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0;
        cin>>n;
        int a[n+5];
        for(int i=0; i<n; i++)cin>>a[i];
        sort(a,a+n);
        int i=0,j=0;
        while(i<n)
        {
            if(a[i]<v[j])
            {
                sum+=v[j];
                i++;
            }
            else
                j++;
        }
        cout<<"Case "<<no<<": ";
        no++;
        cout<<sum<<" Xukha"<<endl;
    }
    return 0;
}
