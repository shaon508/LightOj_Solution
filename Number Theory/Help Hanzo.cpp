#include<bits/stdc++.h>
using namespace std;
bool prime[1000009];
vector<long long>v;
void PrimeFactor()
{
    long long int i,j;
    for(i=2; i<=500000; i++)
    {
        if(prime[i]==0)
        {
            v.push_back(i);
            for(j=i*i; j<=500000; j+=i)
            {
                prime[j]=1;
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
        long long int a,b,c=0,root;
        cin>>a>>b;
        cout<<"Case "<<no<<": ";
        no++;
        root=sqrt(b);
        int dummy_array[b-a+1]= {0};
        int i=0;
        while(v[i]<=root)
        {
            long long int start=(a/v[i])*v[i];
            if(start<a)
            {
                start+=v[i];
            }
            for(long long int j=max(start,v[i]*v[i]); j<=b; j+=v[i])
            {
                dummy_array[j-a]=1;
            }
            i++;
        }
        for(int i=0; i<=(b-a); i++)
        {
            if(!dummy_array[i])c++;
           // cout<<i<<"="<<dummy_array[i]<<" ";
        }
        if(a==1)c--;
        cout<<c<<endl;
    }
    return 0;
}
