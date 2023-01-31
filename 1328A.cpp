#include<iostream>
using namespace std;

int main(){
int n ;

for(int i = 0 ; i<n ; i++){
    int  a , b ;
    cin>>a>>b;

int count = 0 ;


if (a>=b){
    while(a%b != 0){
        count++;
        a = a+1;
    }
    cout<<count;
}
else{
    while(a!=b){
        count++;
        a= a +1 ;
    }
    cout<<count;
}





}



return 0;
}