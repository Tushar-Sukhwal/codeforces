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
        lli n , counter = 0 ; 
        cin >> n ; 
        int sum = 0 ; 
        int i = 1 ; 
        while(sum<=n){
            sum = sum + (i*(i+1))/2; 
            i++; 
            counter++; 
        }
        cout<<counter-1 ; 

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>