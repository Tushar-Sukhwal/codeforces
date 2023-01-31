//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n , m , k ; 
        cin >> n >> m >> k ; 
        int blueOnly = 0 , redOrBlue = 0 ; 
        for(int i = 0 ; i<n ;i++){
            int a ; 
            cin >> a ; 
            if(a==1)    blueOnly++;
            else        redOrBlue++;
        }
        int toBuy = 0 ;

        if(blueOnly>m){
            toBuy+=blueOnly-m ;
            if(redOrBlue>k){
                toBuy+=redOrBlue-k; 
            }
            
        } 
        else {
            redOrBlue -= m-blueOnly ; 
            if(redOrBlue>k){
                toBuy+=redOrBlue-k ;
            }
        }
        
        cout<<toBuy;

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>