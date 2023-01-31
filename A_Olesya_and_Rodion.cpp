//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
lli minimunNDigitNumber(int n ){
    return pow(10,n); 
}

lli maximumNDigitNumber(int n ){
    return pow(10,n+1)-1 ; 
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        lli n , m ;
        cin >> n >> m ; 

        if(n==1 && m==10)
            cout<<"-1"; 

        lli low = minimunNDigitNumber(n)/m ; 

        
        if(((low+1)*m)<maximumNDigitNumber(n))
            cout<< (low+1)*m ; 
        else 
            cout<<"-1";






    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>