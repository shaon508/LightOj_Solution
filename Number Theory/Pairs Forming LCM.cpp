#include<bits/stdc++.h>
using namespace std;
bool Primes[30000000];
vector <long long>v;
void PrimeNumbers()
{
    long long int i,j;
    for(i=2; i<=20000000; i++)
    {
        if(Primes[i]==0)
        {
            v.push_back(i);
            for(j=i*i; j<=20000000; j+=i)
            {
                Primes[j]=1;
            }
        }
    }
}
int main()
{
    PrimeNumbers();
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,Count=0,ans=1;
        scanf("%lld",&n);
        int j=0;
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
                ans*=(2*c)+1;
            }
            j++;
        }
        if(n>1)
        {
            ans*=3;
        }
        printf("Case %d: %lld\n",no,(ans+1)/2);
        no++;
    }
    return 0;
}
