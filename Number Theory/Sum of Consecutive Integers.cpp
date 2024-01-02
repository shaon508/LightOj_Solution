#include<bits/stdc++.h>
using namespace std;
bool Primes[10000009];
vector<long long>PrimeNo;
void PrimeFactor()
{
    for(long long int i=2; i<=10000000; i++)
    {
        if(Primes[i]==0)
        {
            PrimeNo.push_back(i);
            for(long long int j=i*i ; j<=10000000; j+=i)
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
        long long int num;
        cin>>num;
        cout<<"Case "<<no<<": ";
        no++;
        long long int res=1,i=0;
        while(num%2==0)
        {
            num/=2;
        }
        while((PrimeNo[i]*PrimeNo[i]<=num) && (i<PrimeNo.size()))
        {
            int c=0;
            while(num%PrimeNo[i]==0)
            {
                c++;
                num/=PrimeNo[i];
            }
            res*=(c+1);
            i++;
        }
        if(num!=1)
        {
            res*=2;
        }
        cout<<res-1<<endl;
    }
    return 0;
}
