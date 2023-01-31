#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

    int temp = min({(k*l)/nl , c*d , p/np });

    cout<<temp/n; 

return 0;
}