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
        lli a , b ; 
        cin >> a >> b ; 

        int sum = a ; 
        int temp = b ; 
        while(a/temp){
            sum += a/temp ; 
            temp = temp*b ; 
        }
        cout<<sum ; 


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>