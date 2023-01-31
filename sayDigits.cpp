// you are given a number ; 
//you have to print it in words 
//eg     i/p-> 412   o/p-> Four One Two 


//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)



void callDigits(int n ,vector<string> arr ){

    if(n==0)
        return ; 

    callDigits(n/10,arr) ; 
    cout<<arr[n%10]<<" ";
    

}



int main(){
 vector<string> arr(10)  ;
arr = {"zero ","one" , "two" ,"three" , "four" , "five" , "six" , "seven" , "eight" , "nine" } ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n ; cin >> n ;
    callDigits (n,arr) ; 


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>