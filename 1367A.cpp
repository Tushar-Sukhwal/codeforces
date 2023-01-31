#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    for(int i = 0 ; i<n; i++){
        string str ,str1; 
        cin >> str ; 
        str1.push_back(str[0]);
        for(int i = 1 ; i<str.size() ; i= i+2){
            str1.push_back(str[i]);
        }
        cout<<str1<<endl; 
    }


return 0;
}


//correct and closed 
