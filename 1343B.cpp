#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    for(int i = 0 ; i<n; i++){
        int a ; 
        cin >> a ; 
        vector<int> arr ; 
        if(((a/2)%2)==1){
            cout<<"NO";
        }
        else{
            for(int j = 1 ; j<=n/2 ; j++){
                arr.push_back(j*2); 

            }
            int sum = (n/2)*((n/2)+1);
            for(int j = 1 ; j<n-1 ; j=j+2){
                sum = sum-j; 
                arr.push_back(j); 
            }
            arr.push_back(sum); 
            
        }
        for(int i = 0 ; i<arr.size(); i++){
            cout<<arr[i]; 
        }


    }


return 0;
}