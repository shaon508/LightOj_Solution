#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin>>TestCase;
    for(int i=1; i<=TestCase; i++)
    {
        int num;
        cin>>num;
        pair<int,int>p[1005];
        for(int i=1; i<1001; i++)
        {
            int count=0;
            for(int j=1; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    if(j*j!=i)
                    {
                        count+=2;
                    }
                    else
                    {
                        count++;
                    }
                }
            }
            p[i].first=count;
            p[i].second=i;
        }
        sort(p,p+1001);
        int temp[1005],m=1;
        for(int i=1; i<=p[1000].first; i++)
        {
            for(int j=1000; j>0; j--)
            {
                if(p[j].first==i)
                {
                    temp[m]=p[j].second;
                    m++;
                }
            }
        }
        cout<<"Case "<<i<<": "<<temp[num]<<endl;
    }
    return 0;
}

