#include <bits/stdc++.h>
using namespace std;

int main(){

int n ; 
cin >> n ; 

for(int i = 0 ; i<n ; i++){
    string str ,str1 ;
    cin>>str; 
    int a = (str.size()/3)+1; 

    for(int j = 0 ; j<a ; j++){
        str1.push_back('Y');
        str1.push_back('e');
        str1.push_back('s');
    } 
    int b = 0 ; 
    int c = str.size()-1 ; 
    int p ; 
    while(c<str1.size()){
        int counter = 0 ; 
        for(int l = b ; l<c ; l++){
            if(str1[l]==str[l]){
                counter++;
            }
            p = counter; 
        }
        if (counter==str1.size()){
            cout<<"YES";
            break;
        }
        
        b++; 
        c++; 
    }
    if(p == str1.size()){

    }

    else{
        cout<<"NO";
    }
}


return 0;
}