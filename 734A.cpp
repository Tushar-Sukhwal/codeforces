#include<iostream>
#include<string>
using namespace std;

int main(){
    int n ; 
    cin>>n ;
 
    string str ; 
    cin>>str; 
    int a = 0 , d = 0 ; 

    for(int i = 0 ; i<str.size() ; i++){

        if(str[i]==65)
            a++; 

        else
            d++; 

    }
    if(a>d)
        cout<<"Anton";

    else if(a==d)
        cout<<"Friendship"; 
    
    else
        cout<<"Danik"; 


return 0;
}
//hello 
