#include <bits/stdc++.h>
using namespace std;

int main(){
    char a ; 
    string str  ; 
    vector<int> str1 (26,0); 


    while(a!='}'){
        char b ; 
        cin >> b ; 
        str.push_back(b); 
        a = b ; 
    }


    for(int i = 0 ; i<str.size() ; i++){
        if(str[i]<=122 && str[i]>=97){
            str1[str[i]-97]++;
        }
    }
    int counter = 0 ; 
    for(int i = 0 ; i<str1.size() ; i++){
        if(str1[i]!=0){
            counter++; 
        }
    }
    cout<<counter ; 
    




return 0;
}


//correct and closed 
