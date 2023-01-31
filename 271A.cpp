#include <bits/stdc++.h>
using namespace std;

bool distinct(int n ){

    vector<int> arr; 
    for(int i = 0 ; i<4 ; i++){
        arr.push_back(n%10);
        n = n/10 ; 
    }

    for(int i = 0 ; i<4 ; i++){
        for(int j = i+1 ; j<4 ; j++){
            if(arr[i]==arr[j])
                return false ; 
        }
    }
    return true ; 
}

int main(){

    int n ; 
    cin>>n ;
    n++; 

    while(1){
        if(distinct(n)){
            cout<<n; 
            break; 
        }
        n++;
    }

    return 0;
}


// correct and closed 