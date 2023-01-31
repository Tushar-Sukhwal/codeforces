#include <bits/stdc++.h>
using namespace std;

int main(){

int n ;
int a , b = 0 ;
cin >> n ; 
int temp1 = -1 , counter =0  ; 

for(int i = 0 ; i < n ; i++){
    string str ; 
    cin>>str ; 
    a = str[0]; 
    b = str[1]; 
    
    if(temp1==a)
        counter++; 
    
    temp1 = b ; 

}


return 0;
}