#include<bits/stdc++.h>
using namespace std;
double Array[1000009];
void Num()
{
    int j=1;
    double sum=0;
    for(int i=1; i<=100000000; i++)
    {
        sum+=(double)(1/(double)i);
        if(i%100==0)
        {
            Array[j]=sum;
            j++;
        }
    }
}
int main()
{
    Num();
    int t,no=1;
    cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double ans=Array[n/100];
        for(int i=((n/100)*100)+1; i<=n; i++)
        {
            ans+=(double)(1/(double)i);
        }
        printf("Case %d: %0.10lf\n",no,ans);
        no++;
    }
    return 0;
}
