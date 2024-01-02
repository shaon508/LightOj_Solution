#include<bits/stdc++.h>
using namespace std;
long long int m=4294967296,ll=0;
bitset<100000009>Primes;
unsigned int v[6000009];
unsigned int Memorize[6000009];
void PrimeNumbers()
{
    long long int i,j;
    for(i=2; i<=100000000; i++)
    {
        if(Primes[i]==0)
        {
            v[ll]=i;
            ll++;
            for(j=i*i; j<=100000000; j+=i)
            {
                Primes[j]=1;
            }
        }
    }
}
void Memo()
{
    Memorize[0]=v[0];
    for(int i=1; i<ll; i++)
    {
        Memorize[i]=Memorize[i-1]*v[i];
        Memorize[i]=Memorize[i];
    }
}
int main()
{
    PrimeNumbers();
    Memo();
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n;
        unsigned int ans=1;
        scanf("%lld",&n);
        int k=upper_bound(v,v+ll,n)-v;
        ans=Memorize[k-1];
        for(int i=0; i<ll; i++)
        {
            unsigned int j=v[i],x=n;
            double c;
            if(j*j>n)
            {
                break;
            }
            else
            {
                int c=0;
                while(x>=v[i])
                {
                    c++;
                    x/=v[i];
                }
                ans*=pow(v[i],c-1);
            }
        }
        printf("Case %d: %lld\n",no,ans);
        no++;
    }
    return 0;
}
