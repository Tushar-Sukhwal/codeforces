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

        if(n==0){
            cout<<"1";
            return 0 ; 
        }
        
        switch((n+4)%4){
            case 0 : cout<<"6";
                    break ; 

            case 1 : cout<<"8";
                    break ; 

            case 2 : cout<<"4";
                    break; 
            
            case 3 : cout<<"2";
                    break ; 
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>