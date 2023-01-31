#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n;  
    vector<int> arr; 
    for(int i = 0 ; i<n; i++){
        int a ; 
        cin >>a ; 
        arr.push_back(a);   
    }
    int counter = 0 ; 
    int min = arr[0] ; 
    int max = arr[0] ;
    for(int i = 1; i<n; i++){
        if(arr[i]>max){
            max = arr[i] ; 
            counter++;
        }
        else if(arr[i]<min){
            min = arr[i] ; 
            counter++; 
        }
    }
    cout<<counter ; 




return 0;
}