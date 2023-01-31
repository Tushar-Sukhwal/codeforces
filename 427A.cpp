#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    vector<int> arr ; 
    for(int i = 0 ; i<n; i++){
        int a ; 
        cin >> a ; 
        arr.push_back(a); 

    }
    int counter = 0 ; 
    int counter1 = 0 ;

    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i]==-1 && counter1==0){
            counter++;
        }
        else if(arr[i]!=0){
            counter1 = counter1 + arr[i];
        }
        else if(arr[i]==-1 && counter1>0){
            counter1--;
        }
    }
    cout<<counter; 

    return 0;
}