#include<iostream>
#include<string>
using namespace std;

void bit(string str, int &n  ){
    if(str[0]=='+' || str[2]=='+')
        n++;

    else if(str[2]=='-' || str[0]=='-')
        n--;
}



int main(){

    int n ; 
    cin>>n; 
    int ans = 0 ; 

    for(int i = 0 ; i<n; i++ ){
        string str ; 
        cin>>str ; 


        bit(str,ans); 
    }
    cout<<ans;


return 0;
}