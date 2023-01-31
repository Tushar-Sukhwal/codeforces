#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    vector<int> arr (100,0); 
    for(int i = 0 ; i< n ; i++){
            int a ; 
            cin>>a ; 
            for(int j = 0 ; j < a ; j++){
                arr[j]++; 
            }
    }
    vector<int> arr1 ; 
    while(arr[0]!=0){
        int counter = 0 ; 
        for(int i = 0 ; i< 100 ; i++){
            if(arr[i]!=0){
                arr[i]--;
                counter++;
            }
        }
        arr1.push_back(counter); 
    }
    
    for(int i = 0 ; i<arr1.size() ; i++){
        cout<<arr1[arr1.size()-1-i]<<" ";
    }




    return 0;
}


//correct and closed . 