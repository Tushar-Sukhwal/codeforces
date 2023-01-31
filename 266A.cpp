#include<iostream>
#include<string>
using namespace std;

int main(){
    int n ;
    cin>>n ;
    string str ; 
    cin>>str ; 
    int counter = 0 ;

    for(int i = 0 ; i<n ; ){
        int j = i+1 ; 

        while(str[i]==str[j]){
            j++; 
            counter++; 
        }
        i = j ; 

    }
    cout<<counter ; 


return 0;
}