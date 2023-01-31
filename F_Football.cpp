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
    int n , a , b ; 
    cin >> n >> a >> b ; 

    if(n>=a+b){
        cout<<n-a-b <<endl ;
        for(int i = 0 ;i < n ;i++){
            if(i<a)
                cout<<1<<":"; 

            else 
                cout<<0<<":";
            
            if(i>=n-b)
                cout<<1<<endl; 

            else 
                cout<<0<<endl; 
        }
    }
    else if (n==1 && a==b){
        cout<<1<<endl ;
        cout<<a<<":"<<b<<endl; 
    }
    else if(n<=a-1){
        cout<<0<<endl; 
        cout<<0<<":"<<b<<endl; 
        for(int i = 0 ;i<n-2 ; i++){
            cout<<1<<":"<<0<<endl; 
            a--; 
        }
        cout<<a<<":"<<0; 

    }
    else if(n<=b-1){
        cout<<0<<endl; 
        cout<<a<<":"<<0<<endl; 
        for(int i = 0 ;i<n-2 ; i++){
            cout<<"0"<<":"<<1<<endl; 
            b-- ;
        }
        cout<<0<<":"<<b<<endl; 
    }



    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>