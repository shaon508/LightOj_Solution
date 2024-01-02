#include <bits/stdc++.h>
using namespace std;

void _main_main()
{
    int percent , digit , rem = 0 ;
    cin >> percent >> digit ;

    int cnt = 0 ;
    while (1)
    {
        rem = (rem *10 + digit)%percent ;
        cnt++ ;
        if (rem == 0) break ;
    }
    cout << cnt << "\n" ;
}

int main ()
{
    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
}
