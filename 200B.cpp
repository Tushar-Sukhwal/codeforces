#include <bits/stdc++.h>
using namespace std;

int main(){

    long double n ; 
    cin >> n ; 

    long double  absolute = 0 ; 
    for(int i = 0 ; i<n ; i++){
        long double   a ; 
        cin >> a ; 

        absolute += a/n; 
    }
    cout<<absolute ; 



return 0;
}