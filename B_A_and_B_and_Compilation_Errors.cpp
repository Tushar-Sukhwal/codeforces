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
//ASCII VALUES a=97  A=65 
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
#define fj for(int j = 0 ; j<n ; j++) 
#define jaiShreeRam main 
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

//sieve of eratosthenes TC = n*(log(log(n)) ; 
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
//to sort by the second element in pair 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
//to sort in descending order    greater<int>()


int jaiShreeRam(){
    
    letsgooooooooooo
    lli n ; cin >> n ; 
    map<int,int> m1,m2,m3 ; 
    for(int i = 0 ; i<n ;i++){
        lli a ; cin >> a ; 
        m1[a]++;
    }
    for(int i = 0 ; i<n-1 ; i++){
        lli a ; cin >> a ; 
        m2[a]++;
    }
    for(int i = 0 ;i<n-2 ; i++){
        lli a ; cin >> a; 
        m3[a]++;
    }

    auto it3 = m3.begin() ; 
    auto it2 = m2.begin() ;
    auto it1 = m1.begin() ;
    for ( it1 = m1.begin() ; it1!=m1.end() ; it1++ ){
        if(it1->first!=it2->first && it1->second != it2->second){
            break ; 
        }
        // cout<<it1->first<<" "<<it1->second<<" "<<it2->first<<" "<<it2->second<<" "<<endl;
        it2++;
    }
    // if(it1 == m1.begin()) cout<<it1->first <<endl;
    // else 
    cout<<(--it1)->first<<endl;

    for( it3 = m3.begin() ; it3!=m3.end() ; it3++){
        if(it2->first!=it3->first && it2->second != it3->second){
            break ; 
        }
        it3++;
    }
    // if(it2 == m2.begin()) cout<<it2->first <<endl; 
    // else 
    cout<<(--it2)->first<<endl; 
    
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


