


#include<stdio.h>

int fibb(int n ){
    //base case 
    if(n==1){
        return 1 ;
    } 

    if(n==0){
        return 0 ; 
    }


    //recurssion call 
    int a = fibb(n-1) + fibb(n-2); 
    printf("%d ",a);
    
    return a ; 


    

}



int main(){

    int n ; 
    scanf("%d",&n);

    int a = fibb(n);


    printf("\n\n\n %d\n\n\n" ,a); 


}