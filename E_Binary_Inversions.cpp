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
 */

lli check(vector<int> arr , int sum ){
    lli n = arr.size() ; 
    lli inversions = 0 ; 
    for(int i = 0 ; i<n ; i++){
        sum -= arr[i] ;    
        if(arr[i]==1) inversions += n-1-i-sum ; 
    }
    return inversions ; 

}






#define letsgooooooooooo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int main(){
    
    letsgooooooooooo
    test{


        lli n ,sum = 0 ; cin >> n ; vi arr(n) ; 
        fi {
            cin >> arr[i] ; 
            sum += arr[i] ; 
        }

        lli ans3 = check(arr,sum) ; 

        //changing the first most 0 to 1 if possible ;  
        lli i ,flag = 1 ; 
        for( i = 0 ; i<n ; i++){
            if(arr[i]==0){
                arr[i]=1; 
                flag = 0 ; 
                break ; 
            }
        }
        lli ans1 , ans2 ; 
        if(flag == 1){
            ans1 = check(arr,sum);
        }
        else {
            ans1 = check(arr,sum+1);
            arr[i]=0; 
        }

        //changing the last most 1 to 0 if possible ; 
        flag = 1 ; 

        for(i = n-1 ; i>=0 ; i--){
            if(arr[i]==1){
                arr[i]=0 ; 
                flag = 0 ; 
                break ; 
            }
        }
        if(flag == 1){
            ans2 = check(arr,sum) ; 
        }
        else {
            ans2  = check(arr,sum-1) ;
        }
        cout<<max({ans1,ans2,ans3})<<endl; 




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


