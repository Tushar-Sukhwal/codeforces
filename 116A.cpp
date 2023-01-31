#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n ; 
    cin>>n ; 
    //curr as in current capacity 
    int curr = 0 ; 
    int min = INT_MIN ;

    for(int i = 0 ; i<n ; i++){
        int a , b ; 
        cin>>a>>b; 

        curr = curr - a ; 
        curr = curr + b ; 

        if(curr>min){
            min = curr ; 
        }


    }

    cout<<min; 

return 0;
}


//correct and closed 