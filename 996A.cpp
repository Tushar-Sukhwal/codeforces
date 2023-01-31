#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin>>n; 

    int counter = 0 ; 
    
    counter += n/100 ;
    n = n%100 ; 
    counter += n/20;
    n = n%20 ; 
    counter += n/10 ; 
    n = n%10 ; 
    counter += n /5; 
    n = n%5 ; 
    counter += n /1 ; 
    
    cout << counter ; 



    return 0;
}