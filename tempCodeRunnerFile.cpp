#include<stdio.h>

int main(){

    int n ;
    scanf("%d",&n) ; 

    for(int i = 0 ; i<n ; i++){
        int a ; 
        scanf("%d",&a) ; 

        int counter = 1 ; 
        for(int i = 0 ; i<a ; i++){
            int b ; 
            scanf("%d",&b) ; 
            if(b==1){
                if(counter%2==0 )
                    printf("-");

                else printf("+");
            }
            else printf("+") ; 
        }

        printf("\n");

    }           




    return 0 ;
}           