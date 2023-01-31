#include<iostream>
using namespace std;

bool isPrime(int n ){
    for(int i = 2 ; i<n ; i++){
        if(n%i ==0){
            return false ;
        }
    }
    return true  ;
}


//hello hello 
int main(){
int n ; 
cin>>n; 


    int temp1 = n/2;
    int temp2 = n-n/2;

    if(temp1%2==0){
        if(isPrime(temp2)==false){
            cout<<temp1<<" "<<temp2;
        }
        else{
            while(isPrime(temp1) ||isPrime(temp2) ){
                temp1++;
                temp2--;
            }
            cout<<temp1<<" "<<temp2;
        }
    }
    else{
        if(isPrime(temp1)==false){
            cout<<temp2<<" "<<temp1;
        }
        else{
            while(isPrime(temp2) ||isPrime(temp1) ){
                temp2++;
                temp1--;
            }
            cout<<temp2<<" "<<temp1;
        }
    }






return 0;
}

//correct and closed


