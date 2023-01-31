#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    for (int i = 0 ; i<n ; i++){
        string str; 
        cin >> str ; 

        vector<int> arr ; 
        vector<int> arr2; 

        for(int j = 0 ; j<str.size(); j++){
            arr.push_back((str[j]-48)*pow(10,str.size()-1-j));
            
        }
        for(int j = 0 ; j<arr.size(); j++){
            if(arr[j]!=0){
                arr2.push_back(arr[j]);
            }
        }
        cout<<arr2.size()<<endl; 
        for(int j = 0 ; j<arr2.size() ; j++){
            cout<<arr2[j]<<" "; 
        }
        cout<<endl; 
    }
return 0;
}