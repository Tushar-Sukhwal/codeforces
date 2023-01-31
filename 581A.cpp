#include <bits/stdc++.h>
using namespace std;

int main(){

    int a , b ; 
    cin >> a >> b ; 

    if(a>b){
        a = a-b ; 
        cout<<b<<" ";
        b = 0 ; 
        cout<<a/2;
    }
    else{
        b = b-a ; 
        cout<<a<<" ";
        a = 0 ; 
        cout<<b/2 ; 
    }



return 0;
}
//correct and closed 
