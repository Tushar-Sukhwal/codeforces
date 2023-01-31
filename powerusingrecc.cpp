// Question 1 
// Author:- Tumshar Sumkhwal
// Roll NO :- 22ucc110 ; 
// Date:- 17/12/22 ; 


// including stdio.h for importing input and output function 




#include <bits/stdc++.h>
using namespace std;


//
int poweri (int number , int power){

    //base case 
    if(power==0)
        return 1 ; 

    int ans =  poweri (number , power-1) * number ; 
    return ans ; 


}



int main(){

    int number , power ; 
    scanf("%d %d",&number , &power); 

    printf("%d", poweri(number , power)); 

return 0;
}