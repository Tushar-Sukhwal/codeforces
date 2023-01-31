#include<iostream>
using namespace std;


int main(){
int n; 
cin>>n; 
int counter1 = 0 ;
int counter2 = 0 ; 


for(int i = 0 ; i<n ; i++){
    int a , b  ; 
    cin>>a>>b;

    if(a>b){
        counter1++;
    }
    else if(a<b){
        counter2++;
    }



}

if(counter1>counter2){
    cout<<"Mishka";
}
else if (counter1<counter2){
    cout<<"Chris";
}
else{
    cout<<"Friendship is magic!^^";
}







return 0;
}