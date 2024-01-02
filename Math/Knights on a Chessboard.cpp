#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin>>TestCase;
    for(int i=1; i<=TestCase; i++)
    {
        int n,m;
        cin>>n>>m;
        cout<<"Case "<<i<<": ";
        if(n==1 || m==1)
        {
            cout<<max(n,m)<<endl;

        }
        else if(n==2 || m==2)
        {
            if(max(n,m)%2==1)
            {
                cout<<max(n,m)+1<<endl;
            }
            else
            {
                if(max(n,m)%4==0)
                {
                    cout<<max(n,m)<<endl;
                }
                else
                {
                    cout<<max(n,m)+2<<endl;
                }
            }
        }
        else if((n*m)%2==0)
        {
            cout<<(n*m)/2<<endl;
        }
        else
        {
            cout<<((n*m)/2)+1<<endl;
        }
    }
    return 0;
}

