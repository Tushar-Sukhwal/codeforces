// clang-format off
// Author :- Tushar || 04-07-2024 15:40:42
#include <bits/stdc++.h>
#ifdef LOCAL
#include "debug.h"
#else 
#define debug(x...) 42
#endif
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout << fixed << setprecision(7);
// #define endl "\n" 
#define no cout << "NO \n";
#define yes cout << "YES \n";
#define int long long 
#define PI 3.1415926535897932384626433832795
const int inf = 1e9 ,INF = 1e18 ,mod1 = 998244353 ,mod = 1000000007;
// clang-format on

int query(int a, int b, char ch) {
  int ans;
  cout << "?" << " " << ch << " " << a << " " << b << endl;
  cin >> ans;
  return ans;
}

void recc(int a, int b, char ch, string& arr) {
  if (b < a) return;
  if (query(a, b, ch) == 0) {
    return;
  }
  if (a == b) {
    arr[a - 1] = ch;
    return;
  }
  recc(a, (a + b) / 2, ch, arr);
  recc(((a + b) / 2) + 1, b, ch, arr);
}

int32_t main() {
  fastio;
  //
  int n;
  cin >> n;

  string str(n, 'x');

  for (int i = 0; i < 26; i++) {
    recc(1, n, (char)i + 'a', str);
  }

  cout << "! " << str << endl;

  return 0;
}
