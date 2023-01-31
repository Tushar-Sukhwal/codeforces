//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)

int fibb(int n ){
    if(n==0)
        return 0 ; 

    if(n==1)
        return 1 ; 

    return fibb(n-1)+fibb(n-2) ; 
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n ; cin >> n ;

    cout<<fibb(n) ; 


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>