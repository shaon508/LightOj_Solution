#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        long long int n;
        cin>>n;
        cout<<"Case "<<k<<": ";
        long long int last;
        last=sqrt(n);
        if(last*last<n)
        {
            last++;
        }
        long long int mid;
        mid=(last*last)-last+1;
        if(last%2==0)
        {
            if(n<=mid)
            {
                cout<<n-((last-1)*(last-1))<<" "<<last<<endl;
            }
            else
            {
                cout<<last<<" "<<last-(n-mid)<<endl;
            }
        }
        else
        {
            if(n<=mid)
            {
                cout<<last<<" "<<n-((last-1)*(last-1))<<endl;
            }
            else
            {
                cout<<last-(n-mid)<<" "<<last<<endl;
            }
        }
    }
    return 0;
}
