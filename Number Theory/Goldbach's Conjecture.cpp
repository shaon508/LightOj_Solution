#include<bits/stdc++.h>
using namespace std;
bool PrimesNo[10000009];
vector<int >Array;
void Primes()
{
    long long int i,j;
    PrimesNo[1]=1;
    for( i=2; i<=10000000; i++)
    {
        if(PrimesNo[i]==0)
        {
            Array.push_back(i);
            for( j=i*i; j<=10000000; j+=i)
            {
                PrimesNo[j]=1;
            }
        }
    }
}
int main()
{
    int t,i=1;
    cin>>t;
    Primes();
    while(t--)
    {

        int num,sum=0;
        cin>>num;
        cout<<"Case "<<i<<": ";
        i++;

        for(int j=0; Array[j]<=num/2; j++)
        {
            int k=num-Array[j];
            if(PrimesNo[k]==0)
                sum++;

        }
        cout<<sum<<endl;
    }
    return 0;
}
