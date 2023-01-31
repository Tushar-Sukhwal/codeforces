//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)

int min(int a ){
    if(a%2==0)
        return a/2 ; 

    else 
        return a/2 +1 ; 
}

int ans (int n , int m ){
    int minimum = min(n ); 

    if(minimum%m==0)
        return minimum ;
    
    else{
        if(((minimum/m+1)*m  )< n ){
            return (minimum/m+1)*m ;
        }
        else 
            return -1 ; 
    }




}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        lli n , m ; 
        cin >> n >> m ; 

        if(m>n){
            cout<<"-1";
            return 0 ; 
        }
        if(m==n){
            cout<<m; 
            return 0 ; 
        }

        cout<<ans(n,m); 

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>