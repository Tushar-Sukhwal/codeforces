#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , h , counter =0 ; 
    cin>>n>>h; 

    vector<int> arr; 
    for(int i = 0 ; i<n ; i++){
        int a ; 
        cin>>a; 
        arr.push_back(a); 
    }

    for(int i = 0 ; i<n ;i++){
        if(arr[i]>h){
            counter  = counter +2 ; 
        }
        else
            counter++; 
    }

    cout<<counter  ; 

return 0;
}


//correct and closed 