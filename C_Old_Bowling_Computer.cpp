#include <bits/stdc++.h>
using namespace std;
#define int long long
#define letsgooooooooooo            \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define test         \
  int Tushars_07;    \
  cin >> Tushars_07; \
  while (Tushars_07--)
#define endl "\n"
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define ub upper_bound  // '>'
#define lb lower_bound  // '<='
const int pi = 3.14159265358979323846;
#define vi vector<int>
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define each(a, x) for (auto &a : x)
#define fi for (int i = 0; i < n; i++)
#define fj for (int j = 0; j < n; j++)

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

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  int n, p;
  cin >> n >> p;
  vi arr1(n), arr2(n);
  fi { cin >> arr1[i]; }
  fi { cin >> arr2[i]; }

bool equal = 1 ; 
fi{
  if(arr1[i] != arr2[i]){
    equal = 0 ; 
  }
}



  if(p == 0 ) {
    int temp = 0 ;
      fi {
        if(arr1[i] != arr2[i]){
          temp = 1 ; break; 
        }
      }if(temp){
        no return 0 ;
      }
    
  }
  

  if(equal && p == 1 ){
    no return 0 ; 
  }



  int i = -10;
  for (i = 0; i < n; i++) {
    if (arr1[0] == arr2[i]) break;
  }
  if (i == -10) {
    no;
    return 0;
  }

  int alkasdfasd = i ; 



  int flag = 0;
  for (int j = 0; j < n; j++) {
    // cout << arr1[j] << " " << arr2[i] << endl;
    if (arr1[j] != arr2[i]) {
      flag = 1;
      break;
    }
    i++;
    if(i == n ){
      i = 0 ; 
    }
  }

  if (flag) {
    no;
    return 0;
  }

  if( p == 0 && alkasdfasd != -10 && alkasdfasd == n-1 ){
    no return 0 ; 
  }


  yes

      return 0;
}
