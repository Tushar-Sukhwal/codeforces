//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli Tushars_07 ; cin>>Tushars_07; while(Tushars_07--)
#define mp make_pair
#define endl "\n"
#define ub  upper_bound // '>'
#define lb  lower_bound // '>='
const ll pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;


// vectors
// oops size(x), rbegin(x), rend(x) need C++17
#define vi vector<int> 
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define each(a, x) for (auto &a : x)
#define fi for(int i = 0 ; i<n ; i++) 
#define fj for(int i = 0 ; i<n ; i++) 

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */







#define letsgooooooooooo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    
    letsgooooooooooo
    lli n , k ; cin >> n >> k ; 
    vector<lli> arr(n) ; fi cin >> arr[i] ;

    if(n==1){
        if(arr[0]-k<0) {
            cout<<-1;
            return 0 ; 
        }
        else {
            cout<<arr[0]-k;
            return 0 ;
        }
    }

    sort(arr.begin(),arr.end()) ; 

    int flag = 0 ; 
    lli counter = 0 ;  
    for(int i = 1 ; i<n ; i++){
        counter += arr[i]-arr[0] ; 
        if(counter>=k) {
            flag =1 ; 
            break ; 
        }
    }
    if(flag == 1 ){
        cout<<arr[0] ; 
    }

    
    else {
        for(int i = 0 ;i<arr[0] ;i++){
            counter += n ; 
        if(counter > k ){
            cout<<arr[0]-i-1 ;
            flag = 1 ; 
            break ;

        }
        else if (counter ==k){
            cout<<arr[0]-i ; 
            flag = 1 ; 
            break ; 
        }
        }
    }
    if(flag == 0 ) cout<<-1; 


    





    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>


///////////////////         ///////////  //      //        //\       //////////
        //                  //           //      //       //  \      //      //  
        //    //      //   //            //      //      //   \     //      //  
        //    //      //   ///////////   //////////     //     \     //////////
        //    //      //            //   //      //    //=======\    ////
        //    //      //            //   //      //   //         \   //  //
        //    //////////   ///////////   //      //  //            \ //    // 


