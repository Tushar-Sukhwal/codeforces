#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n ; 
    
    for(int i = 0 ; i<n ; i++){
        int a , b ; 
        cin >> a >> b ; 

        if(abs(a-b)%10!=0){
            cout<<abs(a-b)/10+1; 
        }
        else
            cout<<abs(a-b)/10;

        cout<<endl; 
    }

return 0;
}