#include<stdio.h>

int facto(int n ){

    //base case
    if(n==0)
        return 1; 

    //recusrssion call 
    return facto(n-1)*n;  
}

int main(){

    int n ; 
    scanf("%d",&n);

    printf("%d",facto(n));


    return 0 ; 
}