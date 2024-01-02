#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {
        long long int n,count=0;
        cin>>n;
        int array[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>array[i];
        }
        sort(array,array+n);
        array[n]=-1;
        int c=1;
        for(int i=0; i<n; i++)
        {
            if(array[i]==array[i+1])
            {
                c++;
            }
            else
            {
                if(c%(array[i]+1)==0)
                    count+=(c/(array[i]+1))*(array[i]+1);
                else
                    count+=((c/(array[i]+1))+1)*(array[i]+1);
                c=1;
            }

        }
        cout<<"Case "<<i<<": ";
        i++;
        cout<<count<<endl;
    }
    return 0;
}
