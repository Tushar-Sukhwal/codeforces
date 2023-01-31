#include<stdio.h>

void countdown(int n ){
    if(n==0)
        return ; 

    printf(n); 
    countdown(n-1); 
}



int main(){

    int n ; 
    scanf("%d",&n); 
    countdown(n) ; 



    return 0 ; 
}