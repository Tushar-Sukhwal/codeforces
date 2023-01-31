#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , k ; 
    cin >> n >> k ; 
    int sum = 0 ; 
    int counter = 0 ; 
    for(int i = 1 ; 240-sum>k && i<=n ; i++){

        sum = sum + i*5 ; 
        if(240-sum>=k ){
        counter++ ; 
        }

    }
    cout<<counter; 

    return 0;
}