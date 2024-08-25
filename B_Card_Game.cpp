// clang-format off
// Author :- Tushar || 06-08-2024 20:07:32
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
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
  */
// clang-format on

int32_t main() {
  fastio;
  //
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b, c, d;
    int count = 0;
    cin >> a >> b >> c >> d;

    // ab cd
    // ba cd
    // ab dc
    // ba dc


    if (a >= c && b > d) count++;
    else if (a > c && b>=d ) count++ ; 
    if (b >= c && a > d) count++;
    else if (b>c && a >= d ) count++; 
    if (a >= d && b > c) count++;
    else if ( a > d && b >=c ) count++; 
    if (b >= d && a > c) count++;
    else if (b > d && a >=c ) count++; 
    cout << count << endl;
  }

  return 0;
}
