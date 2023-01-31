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
        lli n , ones = 0 , twos = 0 ; 
        string str ; 
        cin >> n >> str ; 

        for(int i = 0 ; i<n ; i++){
            if(str[i]=='1')
                ones++;

            else 
                twos++;
        }
    
        cout<<abs(ones-twos);


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>