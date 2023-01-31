#include <bits/stdc++.h>
using namespace std;

int main(){

    string str ; 
    cin >> str ; 

    if(str.size()<7){
        cout<<"NO";
        return 0 ; 
    }
    int i = 0 ; 
    int j = 6 ; 

    while(j<str.size()){
        int counter = 0 ; 
        for(int k = i ; k<=j ; k++ ){
            counter += str[k]-'0' ; 

        }
        if(counter==7||counter==0 ){
            cout<<"YES";
            return 0 ; 
        }
        i++;
        j++;
    }
    cout<<"NO";
    return 0;
}