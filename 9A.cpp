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
        int n = 6-max(a,b)+1; 

        if(n==1 || n==5 ){
            cout<<n<<"/6";
        }
        else if (n == 2 || n ==4){
            cout<<n/2<<"/3";
        }
        else if(n==6)
            cout<<"1/1";

        else if(n ==3)
            cout<<"1/2";


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>