#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    for(int i = 0 ; i<n; i++){

        int a ; 
        cin >> a ; 
        vector<int> arr; 
        for(int j = 0 ; j<a ; j++){
            int b ; 
            cin >> b; 
            arr.push_back(b); 

        }
        sort(arr.begin(), arr.end()); 

    }


return 0;
}