// clang-format off
// Author :- Tushar || 15-07-2024 20:14:06
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
#define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007;
// clang-format on

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    string ans;

    ans.push_back(str[0]);

    int one = 0, zero = 0;
    if(str[0] == '1') one++ ; 
    for (int i = 1; i < n; i++) {
      if (str[i] != str[i - 1]) ans.push_back(str[i]);
      if(str[i] == '1') one++; 
    }

    for (auto it : ans) {
      if (it == '0')
        zero++;
    }

    if (one > zero) yes else no
  }

  return 0;
}