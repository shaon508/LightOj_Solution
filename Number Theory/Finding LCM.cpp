#include<bits/stdc++.h>
using namespace std;
bool Primes[1000009];
vector <long long>v;
void PrimesFactor()
{
    long long int i,j;
    for(i=2; i<=1000000; i++)
    {
        if(Primes[i]!=1)
        {
            v.push_back(i);
            for(j=i*i; j<=1000000; j+=i)
            {
                Primes[j]=1;
            }
        }
    }
}
long long int gcd(long long int a, long long int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    PrimesFactor();
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,l,LcmOfAB,sum=1;
        int array1[100000]= {0};
        int array2[100000]= {0};
        cin>>a>>b>>l;
        cout<<"Case "<<no<<": ";
        no++;
        if(l%a!=0 || l%b!=0)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            LcmOfAB=(a*b)/gcd(a,b);
            int i=0;
            while(v[i]<=LcmOfAB)
            {
                int c=v[i];
                while(LcmOfAB%v[i]==0)
                {
                    array1[c]++;
                    LcmOfAB/=v[i];
                }
                i++;
            }
            int j=0;
            while(v[j]<=l)
            {
                int c=v[j];
                while(l%v[j]==0)
                {
                    array2[c]++;
                    l/=v[j];
                }
                if((array2[c]>array1[c]) && array2[c]!=0)
                {
                    sum*=pow(c,array2[c]);
                }
                j++;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
