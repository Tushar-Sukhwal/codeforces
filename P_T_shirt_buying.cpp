// Author :- Tushar Sukhwal
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define lld long double
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli Tushars_07 ; cin>>Tushars_07; while(Tushars_07--)
#define mp make_pair
#define endl "\n"
#define ub  upper_bound // '>'
#define lb  lower_bound // '<='
const lld pi = 3.14159265358979323846;
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
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define each(a, x) for (auto &a : x)
#define fi for(int i = 0 ; i<n ; i++) 
#define fj for(int j = 0 ; j<n ; j++) 
#define jaiShreeRam int main() 
#define letsgooooooooooo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


//ASCII values a=97 A=65
// const ll mod = 1000000007;
// const ll mod = 998244353;


//! bitwise operators
//&  and
//|  or
//^  XOR
//<< left shift (*2)
//>> right shift (/2)
//~  bitwise not
//__builtin_popcount(uli)  --> to calculate the no of set bits O(1)

//! IMPORTANT FUNCTIONS 
//1. binary_search(startaddress,endaddress, valuetofind) --> true or false


/* //!stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 * Fcking use lli instead of int
 * use map/set instead of unordered map/set whererver possible
 */

//!sieve of eratosthenes 
//TC = n*(log(log(n)) ; 
/* void SieveOfEratosthenes(int n)
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
} */

//!to sort by the second element in pair 
/* bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
} */
//!to sort in descending order    
// greater<int>()


jaiShreeRam{
    
    letsgooooooooooo
    lli n ; cin >> n ; 
    vi p(n) , a(n) , b (n) ; 
    fi cin >> p[i] ; fi cin >> a[i] ; fi cin >> b[i] ; 

    vector<pair<int,pair<int,int>>> v (n) ; 
    for(int i = 0 ; i <n ;i++){
      v[i].first = p[i] ; 
      v[i].second.first = a[i] ; 
      v[i].second.second = b[i] ; 
    }

    //a = 1,1
    //b = 1,2
    //c = 1,3
    //d = 2,1
    //e = 2,2
    //f = 2,3
    //g = 3,1
    //h = 3,2
    //i = 3,3



    set<int> A , B , C , D , E , F , G , H , I ; 
    for(int i = 0 ; i <n ; i++){
      if(v[i].second.first == 1){
        if(v[i].second.second = 1){
          A.insert(v[i].first) ; 
        }
        else if(v[i].second.second = 2){
          B.insert(v[i].first) ; 
        }
        else if(v[i].second.second = 3){
          C.insert(v[i].first) ; 
        }
      }
      else if (v[i].second.first == 2 ){
        if(v[i].second.second = 1){
          D.insert(v[i].first) ; 
        }
        else if(v[i].second.second = 2){
          E.insert(v[i].first) ; 
        }
        else if(v[i].second.second = 3){
          F.insert(v[i].first) ; 
        }
      }
      else if (v[i].second.first == 3 ){
        if(v[i].second.second = 1){
          G.insert(v[i].first) ; 
        }
        else if(v[i].second.second = 2){
          H.insert(v[i].first) ; 
        }
        else if(v[i].second.second = 3){
          I.insert(v[i].first) ; 
        }
      }
    }

    lli cust ; cin >> cust ;
    vi customer (cust) ; 
    for(int i = 0 ; i<cust ; i++){
      cin >> customer[i] ; 
    }
    
    for(int i = 0 ; i<cust ; i++){
      set<pair<int,char>>temp ;
      if(customer[i] == 1 ){
        if(!A.empty()){
          A.insert({customer[i],'A'}) ;
        }
        if(!B.empty()){
          B.insert({customer[i],'B'}) ;
        }
        if(!C.empty()){
          C.insert({customer[i],'C'}) ;
        }
        if(!D.empty()){
          D.insert({customer[i],'D'}) ;
        }
        if(!G.empty()){
          G.insert({customer[i],'G'}) ;
        }
      }
      else if (customer[i] == 2 ){
        if(!B.empty()){
          B.insert({customer[i],'B'}) ;
        }
        if(!D.empty()){
          D.insert({customer[i],'D'}) ;
        }
        if(!E.empty()){
          E.insert({customer[i],'E'}) ;
        }
        if(!F.empty()){
          F.insert({customer[i],'F'}) ;
        }
        if(!H.empty()){
          H.insert({customer[i],'H'}) ;
        }
      }
      else if (customer[i] == 3 ){
        if(!C.empty()){
          C.insert({customer[i],'C'}) ;
        }
        if(!F.empty()){
          F.insert({customer[i],'F'}) ;
        }
        if(!G.empty()){
          G.insert({customer[i],'G'}) ;
        }
        if(!H.empty()){
          H.insert({customer[i],'H'}) ;
        }
        if(!I.empty()){
          I.insert({customer[i],'I'}) ;
        }
      }
      if(temp.empty()){
        cout << -1 << " " ; 
      }
      else{
        cout << temp[0].second << " " ; 

      }

    }




    return 0;
}