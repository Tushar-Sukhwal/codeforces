#include<stdio.h>
#include<math.h>

#include<limits.h>


int main(){

    int n ; 
    scanf("%d",&n); 
        int max = INT_MIN; 
        int counter = 0 ; 

    for(int i = 0 ; i<n ;i++){
        int a ; 
        scanf("%d",&a); 


        if(a>max){
            max = a; 
            counter = 0 ; 
        }
        if(a == max )
            counter++ ; 

    }

    printf("max value is %d and its occurance is %d " , max , counter); 



}