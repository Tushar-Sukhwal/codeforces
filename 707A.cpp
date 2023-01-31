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
        int a , b ; 
        cin >> a >> b ; 
        string str; 
        for(int i = 0 ; i<a*b ; i++){
            char c ; 
            cin >> c ; 
            if(c == 'C' || c == 'M' || c == 'Y'){
                cout<<"#Color";
                return 0 ; 
            }

        }    
        cout<<"#Black&White";

        

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>