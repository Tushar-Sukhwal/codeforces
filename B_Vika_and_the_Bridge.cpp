// Author :- Tushar Sukhwal
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define lld long double
#define ll long long
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define test         \
  lli Tushars_07;    \
  cin >> Tushars_07; \
  while (Tushars_07--)
#define mp make_pair
#define endl "\n"
#define ub upper_bound  // '>'
#define lb lower_bound  // '<='
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
#define fi for (int i = 0; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define jaiShreeRam int main()
#define letsgooooooooooo            \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

// ASCII values a=97 A=65
//  const ll mod = 1000000007;
//  const ll mod = 998244353;

//! bitwise operators
//&  and
//|  or
//^  XOR
//<< left shift (*2)
//>> right shift (/2)
//~  bitwise not
//__builtin_popcount(uli)  --> to calculate the no of set bits O(1)

//! IMPORTANT FUNCTIONS
// 1. binary_search(startaddress,endaddress, valuetofind) --> true or false

/* //!stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 * Fcking use lli instead of int
 * use map/set instead of unordered map/set whererver possible
 */

//! sieve of eratosthenes
// TC = n*(log(log(n)) ;
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

//! to sort by the second element in pair
/* bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
} */
//! to sort in descending order
// greater<int>()

void printSet (multiset<lli> m ){
  for(auto it = m.begin() ; it!= m.end() ; it++){
    cout<<(*it)<<" ";
  }
  cout<<endl; 
}



jaiShreeRam {
  letsgooooooooooo test {
    lli k, n;
    cin >> n >> k;
    map<lli, multiset<lli>> m, m2;

    for (int i = 0; i < n; i++) {
      lli a;
      cin >> a;
      m[a].insert(i);
    }

    lli prev = 0;

    auto it = m.begin();
    auto itt = (*it).second.begin();

    for (it = m.begin(); it != m.end(); it++) {
      for (itt = (*it).second.begin(); itt != (*it).second.end(); itt++) {
        if (itt == (*it).second.begin()) {
          lli start = (*itt);
          prev = start;
          m2[(*it).first].insert(start - 0);
          // cout << "start" << start << "prev" << prev << start - 0 << endl;
          // continue;
        }
        auto middle = (*itt);
        m2[(*it).first].insert(middle - prev - 1 );
        prev = middle;
        auto temp = itt;
        if (++temp == (*it).second.end()) {
          auto end = (*itt);
          prev = end;
          m2[(*it).first].insert(n - 1 - end);
          continue;
        }
      }
    }

    for ( it = m2.begin(); it != m2.end(); it++) {
      auto last = (*it).second.end() ; 
      last-- ; 
      // cout<<"check->"<<(*last)<<" "<<endl; 
      if(*last == 0) continue;
      else if (*last == 1){
      // cout<<"check2->"<<(*last)<<" "<<endl; 

          lli temp = 1 ; 
          auto itra = (*it).second.find(temp) ; 
          (*it).second.erase(itra) ; 
          (*it).second.insert(0) ; 
          (*it).second.insert(0);
      }
      else {
        if((*last)%2 == 0 ){
      // cout<<"check3->"<<(*last)<<" "<<endl; 
          
          lli temp = *last ; 
          auto itra = (*it).second.find(temp) ; 
          (*it).second.erase(itra) ; 
          (*it).second.insert(temp/2) ; 
          (*it).second.insert((temp/2)-1);
          // printSet((*it).second) ; 
        }
        else {
      // cout<<"check4->"<<(*last)<<" "<<endl; 

          lli temp = *last ; 
          auto itra = (*it).second.find(temp) ; 
          (*it).second.erase(itra) ; 
          (*it).second.insert(temp/2) ; 
          (*it).second.insert(temp/2);
        }
      }
    }

  multimap<lli,lli>ans ; 

    for (it = m2.begin(); it != m2.end(); it++) {
      auto last = (*it).second.end() ; 
      last-- ; 
      lli temp = (*last) ; 
      // ans[temp] = (*it).first ;
      ans.insert({temp,(*it).first});
    }

    auto lsdjf = ans.begin() ; 
    cout<<(*lsdjf).first<<endl; 

  }

  return 0;
}


      // for (auto itt = (*it).second.begin(); itt != (*it).second.end(); itt++) {
        
      // }