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
        test{
            lli a ; 
            cin >> a ; 
            lli sum = 3 ; 
            lli i = 2 ; 
            while(a%sum != 0  ){
                
                sum += pow(2,i); 
                
                i++; 
            }
            cout<<a/sum<<endl; 
        }
        


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>