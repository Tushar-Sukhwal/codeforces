#include<stdio.h>

int power(int n , int b ){

    //base case
    if(b==0)
        return 1; 

    return n*power(n,b-1);


}


int main(){

    int n ; 
    scanf("%d" , &n); 

    printf("%d",power(n,3)); 





    return 0 ;
}