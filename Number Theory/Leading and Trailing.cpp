#include<bits/stdc++.h>
using namespace std;
long long int m=1000;
long long int POW(long long int n,long long int k)
{
    if(k==0)return 1;
    if(k%2==0)
    {
        long long int res=POW(n,k/2);
        return ((res%m)*(res%m))%m;
    }
    else
    {
        return ((n%m)*POW(n,k-1)%m)%m;
    }
}
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,k,ans1,ans2;
        double leading;
        scanf("%lld %lld",&n,&k);
        leading=(double)k*(log10((double)n));
        leading=leading-(int)leading;
        leading=pow(10,leading)*100;
        ans1=(int)leading;
        ans2=POW(n,k);
        if(ans2<100)
        {
            if(ans2<10)
            {
                printf("Case %d: %lld 00%lld\n",no,ans1,ans2);
            }
            else
            {
                printf("Case %d: %lld 0%lld\n",no,ans1,ans2);

            }
        }
        else
        {
            printf("Case %d: %lld %lld\n",no,ans1,ans2);
        }
        no++;
    }
    return 0;
}
