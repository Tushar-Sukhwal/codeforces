#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1 , s2 ; 
    cin >> s1 >> s2 ; 
    vector<int> arr; 

    for(int i = 0 ; i<s1.size() ; i++){
        if(s1[i]==s2[i])
            arr.push_back(0) ;

        else 
            arr.push_back(1) ;
    }
    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i]; 
    }


return 0;
}   