#include <bits/stdc++.h>
using namespace std;

int main(){

    string str ; 
    cin >> str ; 
    int i = 0 ; 
    while(i<str.size()){
        if(str[i]=='.'){
            cout<<"0";
        }
        else{
            if(str[i+1]=='.'){
                cout<<"1";
                i++;
            }
            else{
                cout<<"2";
                i++;
            }
        }
        i++;
    }


return 0;
}


//correct and closed 