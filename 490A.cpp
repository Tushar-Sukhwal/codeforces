#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    vector<int> arr ; 
    vector<int> arr1 ; 
    vector<int> arr2 ; 
    vector<int> arr3 ;
    for(int i = 0 ; i<n; i++){
        int a ; 
        cin>> a ; 
        arr.push_back(a); 
    }
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==1)
            arr1.push_back(i+1);
        
        else if (arr[i]==2)
            arr2.push_back(i+1);

        else
            arr3.push_back(i+1);

    }
    cout<<min({arr1.size(),arr2.size(),arr3.size()})<<endl; 

    for(int i = 0 ; i<min({arr1.size(),arr2.size(),arr3.size()}) ; i++){
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<" "<<endl ;
    
    }


return 0;
}