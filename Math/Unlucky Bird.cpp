#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(t--)
    {

        double v1,v2, v3, a1, a2,t1,t2,t,s1,s2;
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;
        if(t1>t2)
            t=t1;
        else
            t=t2;
        s1=v1*t1-0.5*a1*t1*t1;
        s2=v2*t2-0.5*a2*t2*t2;
        cout<<"Case "<<i<<": ";
        i++;
        printf("%.10lf %.10lf\n",s1+s2,t*v3);
    }
    return 0;
}
