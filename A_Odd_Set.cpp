//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"No \n";
#define yes cout<<"Yes \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test{
        lli n ; cin >> n ;
            lli even = 0  , odd = 0 ;  
        for(int i = 0 ; i<2*n ;i++){
            lli a ; 
            cin >> a;
            if(a==1)
                odd++ ; 
            else if(a%2==0) 
                even++ ; 

            else 
                odd++ ; 
        }
        if(odd==even) yes 
        else no 
    }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>