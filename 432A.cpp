#include <bits/stdc++.h>
using namespace std;

int main(){

    int n , k ; 
    cin >> n >> k ; 
    vector<int> arr; 
    for(int i = 0 ; i<n; i++){
        int a; 
        cin >> a ; 
        arr.push_back(a); 
    }
    sort(arr.begin(), arr.end());
    int counter = 0 ; 
    for(int i = 0 ; i<n ;i++){
        if(arr[i]<=5-k){
            counter++;
        }
    }
    cout<<counter/3;

return 0;
}   


//correct and closed ; 
