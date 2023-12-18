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
  int r, c;
  cin >> r >> c;
  int flag = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      char c;
      cin >> c;
      if (c == '^') flag = 1;
    }
  }


  if ((r == 1 && c == 1 && flag) || (r == 2 && c == 1 && flag) ||
      (r == 1 && c == 2 && flag) || (r == 1 && flag ) || (c ==1 && flag )) {
    no return 0;
  }

  // cout<<flag<<endl;
  if (((r < 2 && c < 3) || (c < 2 && r < 3)) && (flag == 1)) {
    no
  } else
    yes

        return 0;
}
