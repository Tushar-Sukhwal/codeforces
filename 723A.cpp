#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr ; 
    for(int i = 0 ; i<3 ; i++){
        int a ; 
        cin >> a ; 
        arr.push_back(a); 
    }
    sort(arr.begin(), arr.end());

    cout<<abs(arr[1]-arr[0])+abs(arr[1]-arr[2]);


return 0;
}