#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , a ; 
    cin >> n >> a ; 
    int sum = 0 ; 
    
    while(1){
        sum += n ; 
        if(sum%10==0){
            cout<<sum/n;
            return 0 ; 
        }

        else if(sum%10==a){
            cout<<sum/n; 
            return 0 ; 
        }
    }


return 0;
}