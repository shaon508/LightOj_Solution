#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int num,found=0;
        cin>>num;
        cout<<"Case "<<no<<": ";
        no++;
        long long int low=1,high=100000000000,mid;
        while(low<=high)
        {
            long long int sum=0,mul=5;
            mid=(low+high)/2;
            while(mul<=mid)
            {
                sum+=(mid/mul);
                mul*=5;
            }
            if(sum>num)
            {
                high=mid-1;
            }
            else if(sum<num)
            {
                low=mid+1;
            }
            else
            {
                found=mid;
                high=mid-1;
            }
        }
        // cout<<low<<" "<<mid<<" "<<high<<endl;
        if(found!=0)
        {
            cout<<found<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }

    }
    return 0;
}

