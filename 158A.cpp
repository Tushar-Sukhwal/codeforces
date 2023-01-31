#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , k ;
    cin>>n>>k;
    
    vector<int> arr ; 

    for(int i = 0 ; i<n ; i++){
        int a ; 
        cin>>a ; 
        arr.push_back(a); 


    } 



    int counter = k;

    int digit = arr[k-1];
    
    int t = k; 

    while(arr[t]==digit){

        counter++;
        t++;

    }

    int zeros = 0 ; 

    for(int i = 0 ; i<counter ; i++){
        if(arr[i]==0){
            zeros++;
        }

    }
    cout<< counter - zeros  ; 


return 0;
}   

//correct and closed 