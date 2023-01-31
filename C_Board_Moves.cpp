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
            lli n ; 
            cin >> n ; 
            lli ans = 0 ; 
            int a = n/2  ; 
            int j = n ;
            for(lli i = n ;  i>1; i = i-2 ){
                ans += ((4*i)-4)*(a+j-n) ;
                j--;
            }

            cout<<ans<<endl; 
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>