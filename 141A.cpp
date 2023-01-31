#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr(26,0) ; 
    vector<int> arr1 (26,0); 
    for(int i = 0 ; i<2 ; i++){
        string str ; 
        cin >> str ; 
        for(int j = 0 ; j<str.size() ; j++){
            arr[str[j]-65]++;
        }
    }
    string str ; 
    cin >> str ; 
    for(int i = 0 ; i<str.size() ; i++){
        arr1[str[i]-65]++; 
    }
    for(int i = 0 ; i<26 ; i++){
        if(arr[i]==arr1[i])
            continue ; 
            
        else{
            cout<<"NO"; 
            return 0 ; 
        }
    }
    cout<<"YES"; 
return 0;
}








































