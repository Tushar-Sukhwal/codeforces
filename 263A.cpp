#include<iostream>
using namespace std;

void input(int arr[]){

    for(int i = 0 ; i<25 ;i++){
                
        int a; 
        cin>>a ; 
        arr[i]=a ; 
    }
}
int search(int arr[]){
    for(int i =0 ; i<25 ; i++){
        if(arr[i]==1){
            return i ; 
        }
    }
}

int main(){

    int arr[25] ;

    input(arr); 
    int num = search(arr);

    int row = (num/5) +1 ;
    int col = num%5 +1 ; 
    
    int counter = abs(row-3) + abs(col-3) ; 
    cout<<counter ; 


return 0;
}


//correct and closed 