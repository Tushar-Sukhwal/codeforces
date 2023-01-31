#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    deque<int> arr ; 
    for(int i = 0 ; i<n ; i++){
        int a ; 
        cin >> a ; 
        arr.push_back(a); 
    }
    int s = 0  , d = 0 ; 


    while(arr.size()>0){
        if(arr.size()>0){
            if(arr[0]>arr[arr.size()-1]){
                s = s + arr[0];
                arr.pop_front() ; 
            }
            else{
                s = s+arr[arr.size()-1];
                arr.pop_back();
            }
        }

        if(arr.size()>0){
            if(arr[0]>arr[arr.size()-1]){
                d = d+arr[0];
                arr.pop_front();
            }
            else{
                d = d + arr[arr.size()-1];
                arr.pop_back(); 
            }
        }
    }
    cout<<s<<" "<<d; 

return 0;
}