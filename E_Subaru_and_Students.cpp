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
 * Fcking use lli instead of int
 * use map/set instead of unordered map/set whererver possible
 */
#define letsgooooooooooo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool sortbysec(const pair<string,int> &a, 
              const pair<string,int> &b) 
{ 
    return (a.second < b.second); 
} 
  

int main(){
    
    letsgooooooooooo
    lli n ;cin >>n ; 
    vector<pair<string,int>> arr (n) ; 
    fi{
        cin >> arr[i].first ;
        cin >> arr[i].second  ;
    }

    sort(arr.begin(),arr.end()) ;

    int i = 0 , j = 0 ; 
    while(i<n){
        while(j<n){
            if(arr[i].first[0]!=arr[j].first[0]){
                break ; 
            }
            else{
                j++; 

            }
        }
        sort(arr.begin()+i, arr.begin()+j, sortbysec);
        i = j ; 
    }

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i].first<<endl; 
    }
    

    
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


