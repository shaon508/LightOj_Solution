#include<bits/stdc++.h>
using namespace std;
long long int Ans(long long int n)
{
    long long int i,sum=0,sum1=0,sum2=0,k=0;
    for( i=2; i*i<=n; i++)
    {
        k=n/i;
        sum1=((n-i*i)/i)*i;
        sum2=((k*(k+1))/2)-(((i-1)*i)/2);
        sum+=sum1+sum2;
    }
    return sum;
}
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,s=0;
        cin>>n;
        cout<<"Case "<<no<<": ";
        no++;
        cout<<Ans(n)<<endl;
    }
    return 0;
}
