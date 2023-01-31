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
        lli n ;
        cin >> n ; 
        int arr[12]={4,7,47,74,447,474,744,477,747,774,444,777};
        for(int i = 0 ; i<12 ; i++){
            if(n%arr[i]==0 && n>=arr[i]) {
                yes 
                return 0 ; 
            }


        }
        no 


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>