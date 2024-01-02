#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,no=1;
    cin>>t;
    while(t--)
    {
        long long int num,positive=1,copynum,Ans=1;
        cin>>num;
        cout<<"Case "<<no<<": ";
        no++;
        if(num<0)
        {
            num=-num;
            positive=0;
        }
        copynum=num;
        for(long long int i=2; i*i<=copynum; i++)
        {
            int Count=0;
            while(num%i==0)
            {
                Count++;
                num/=i;
            }
            if((positive==0 && Count%2==1)&& num==1 )
            {
                Ans=Count;
                break;
            }
            else if(num==1 && positive==1)
            {
                Ans=Count;
                break;
            }
            num=copynum;
        }
        cout<<Ans<<endl;
    }
    return 0;
}
