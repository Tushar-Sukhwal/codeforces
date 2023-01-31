#include<iostream>
#include<string>
using namespace std;

int main(){

string str ; 
cin>>str; 
int small = 0 ;
int big = 0 ; 

for(int i = 0 ; i<str.size(); i++ ) {
    if(str[i]<97)
        big++; 

    else
        small++;
}

if(big>small){
    for(int i = 0 ; i<str.size() ; i++){
        if(str[i]>=97)
            str[i] = str[i]-32; 

    }
}
else{
    for(int i = 0 ; i<str.size() ; i++ ){
        if(str[i]<97)
            str[i] = str[i]+32 ; 
    }
}

cout<<str; 
return 0;
}

//correct and closed 