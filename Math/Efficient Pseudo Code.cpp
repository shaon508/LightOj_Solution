#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000000007;
bool Primes[9000005];
vector <long long>v;
void PrimeNumbers()
{
    long long int i,j;
    for(i=2; i<=6000005; i++)
    {
        if(Primes[i]==0)
        {
            v.push_back(i);
            for(j=i*i; j<=6000005; j+=i)
            {
                Primes[j]=1;
            }
        }
    }
}
long long int Pow(long long int n,long long k)
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
long long int DivisorSum(long long int n,long long int m)
{
    long long int j=0,sum=1;
    while(v[j]*v[j]<=n)
    {
        int c=0;
        while(n%v[j]==0)
        {
            c++;
            n/=v[j];
        }
        if(c>0)
        {
            sum*=((((Pow(v[j],(m*c)+1)-1)%mod)*((Pow(v[j]-1,mod-2))%mod)))%mod;
            sum=sum%mod;
        }
        j++;
    }
    if(n>1)
    {
        sum*=((((Pow(n,m+1)-1)%mod)*((Pow(n-1,mod-2))%mod)))%mod;
        sum=sum%mod;
    }
    return sum;
}
int main()
{
    PrimeNumbers();
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        scanf("%lld %lld",&n,&m);
        if(DivisorSum(n,m)<0)
        {
            printf("Case %d: 1\n",no);
        }
        else
        {
            printf("Case %d: %lld\n",no,DivisorSum(n,m));
        }
        no++;

    }
    return 0;
}
