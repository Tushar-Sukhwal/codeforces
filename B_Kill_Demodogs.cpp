//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
const  lli M = 1000000007;

//1+4+9+16
lli summ (lli n ){
    return  ((n * (n + 1) )/ 2) * (2 * n + 1) / 3 ; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            lli n ; cin >> n ;
            lli ans = summ(n); n--; 

            //1*2 + 2*3 + 3*4 + 4*5 + ...
            lli series = (n*(n+1)*(2*n+1))/6 + (n*(n+1))/2 ;  
            ans = (ans + series)*2022 ; 
            cout<<ans%M<<endl;
        }



    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>