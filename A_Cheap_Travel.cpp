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
        lli m , n , a , b ; 
        cin >> n >> m >> a >> b ; 

        if(m*a<=b) cout<<n*a ; 
        
        else {
            if(n%m==0) cout<<(n/m)*b ; 
            else {
                if ((n%m)*a<b)    cout<<((n/m)*b)+(n%m)*a ;
                else cout<<((n/m)+1)*b; 
            } 
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>