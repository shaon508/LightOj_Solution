#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,ans;
        scanf("%lld",&n);
        ans=(int)sqrt(n)+(int)sqrt(n/2);
        printf("Case %d: %lld\n",no,n-ans);
        no++;
    }
   return 0;
}
