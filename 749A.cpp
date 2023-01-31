//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

int primetwo(int n ){

    if(n==2 )
        return 1 ; 

    if(n==3 )
        return 0 ; 

    if(n%2==1){
        return primetwo(n-3); 
    }
    else{
        //this else is not needed ;
        return primetwo(n-2)+1; 
    }


}
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
        int a = primetwo(n); 
        int b = (n-(2*a))/3; 

        cout<<a+b<<endl;

        for(int i = 0 ; i<a; i++){
            cout<<"2 "; 
        }
        for(int i = 0 ; i<b ; i++){
            cout<<"3 ";
        }
    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>