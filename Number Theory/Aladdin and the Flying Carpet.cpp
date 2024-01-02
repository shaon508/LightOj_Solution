#include<bits/stdc++.h>
using namespace std;
bool Prime[2000006];
vector<long long>v;
void PrimeFactor()
{
    long long int i,j;
    for(i=2; i<=1000105; i++)
    {
        if(Prime[i]==0)
        {
            v.push_back(i);
            for(j=i*i; j<=1000105; j+=i)
            {
                Prime[j]=1;
            }
        }
    }
}
long long int DivisorCount(long long int n)
{
    long long int i=0,Count=1;
    while(v[i]*v[i]<=n)
    {
        int c=0;
        while(n%v[i]==0)
        {
            c++;
            n/=v[i];
        }
        Count*=(c+1);
        i++;
    }
    if(n!=1)
    {
        Count*=2;
    }
    return Count;

}
int main()
{
    PrimeFactor();
    int t,no=1;
    cin>>t;
    while(t--)
    {

        long long int n,k,sum=0,root;
        cin>>n>>k;
        cout<<"Case "<<no<<": ";
        no++;
        root=sqrt(n);
        if(root<k || k*k==n)
        {
            cout<<0<<endl;
        }
        else
        {
            sum=DivisorCount(n)/2;
            for(long long int i=1; i<k; i++)
            {
                if(n%i==0)
                {
                    sum--;
                }
            }
            cout<<sum<<endl;
        }

    }
    return 0;
}
