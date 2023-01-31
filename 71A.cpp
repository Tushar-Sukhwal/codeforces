

#include<iostream>
#include<string>
using namespace std;

int main(){
    int n ; 
    cin>>n ; 

    for(int i = 0 ; i<n ; i++){
        string str ; 
        cin>>str; 

        int size = str.size();

        if(size>10){
            cout<<str[0]<<size-2<<str[size-1]; 
        }
        else{
            cout<<str; 
        }
        cout<<endl; 

    }


    return 0;
}