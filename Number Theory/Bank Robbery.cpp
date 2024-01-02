#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        unsigned long long num;
        cin>>num;
        cout<<"Case "<<no<<": ";
        no++;
        unsigned long long ans=(num*10)/9;
        if(num%9==0)cout<<ans-1<<" "<<ans<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
