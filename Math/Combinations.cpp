o#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000003;
long long int Array[1000009];
void Fact()
{
    long long int sum=1;
    Array[0]=1;
    for(int i=1; i<=1000000; i++)
    {
        sum*=(i%mod);
        sum=sum%mod;
        Array[i]=sum%mod;
    }
}
long long int Pow(long long int n,long long int k)
{
    if(k==0)return 1;
    if(k%2==0)
    {
        long long int res=Pow(n,k/2);
        return ((res%mod)*(res%mod))%mod;
    }
    else
    {
        return ((n%mod)*(Pow(n,k-1)%mod))%mod;
    }
}
int main()
{
    Fact();
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,r,sum=1;
        scanf("%lld %lld",&n,&r);
        sum=(sum*(Array[n]%mod))%mod;
        sum=(sum*Pow(Array[r],mod-2)%mod)%mod;
        sum=(sum*Pow(Array[n-r],mod-2)%mod)%mod;
        printf("Case %d: %lld\n",no,sum);
        no++;
    }
    return 0;
}
