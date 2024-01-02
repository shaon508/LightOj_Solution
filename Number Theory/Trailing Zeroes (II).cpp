#include<bits/stdc++.h>
using namespace std;
long long int FiveCount(long long int n)
{
    long long five_count=0,num,divider=5;
    while((n/divider)>0)
    {
        five_count+=n/divider;
        divider*=5;
    }
    return five_count;
}
long long int TwosCount(long long int n)
{
    long long twos_count=0,num,divider=2;
    while((n/divider)>0)
    {
        twos_count+=n/divider;
        divider*=2;
    }
    return twos_count;
}
long long int Min(long long int a,long long int b)
{
    long long int ans;
    if(a<b)ans=a;
    else ans=b;
    return ans;
}
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int n,r,p,q,sum1=0,sum2=0,c=0;
        scanf("%lld %lld %lld %lld",&n,&r,&p,&q);
        cout<<"Case "<<no<<": ";
        no++;
        sum1=FiveCount(n)-(FiveCount(r)+FiveCount(n-r));
        sum2=TwosCount(n)-(TwosCount(r)+TwosCount(n-r));
        long long int c2=0,c5=0,div2=2,div5=5,num;
        num=p;
        while(num%div2==0)
        {
            c2++;
            div2*=2;
        }
        num=p;
        while(num%div5==0)
        {
            c5++;
            div5*=5;
        }
        sum1+=c5*q;
        sum2+=c2*q;
        sum1=Min(sum1,sum2);
        printf("%lld\n",sum1);
    }

    return 0;
}
