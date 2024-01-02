#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        long long int n,d,temp=0,NoOfDigit=0;
        cin>>n>>d;
        while(1)
        {
            temp=temp*10+d;
            NoOfDigit++;
            // cout<<temp<<endl;
            if(temp>=n)
            {
                temp=temp%n;
            }

            if(temp%n==0)
            {
                break;
            }
        }

        cout<<"Case "<<i<<": ";
        i++;
        cout<<NoOfDigit<<endl;
    }
    return 0;
}
