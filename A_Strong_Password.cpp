// clang-format off
// Author :- Tushar || 30-07-2024 20:06:30
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
    string str;
    cin >> str;

    int flag = 0;
    string ans;
    ans.push_back(str[0]);

    int i = 0;
    for (i = 1; i < str.size(); i++) {
      if (str[i] == str[i - 1]) {
        if (str[i] != 'z')
          ans.push_back(str[i] + 1);
        else
          ans.push_back('a');
        flag = 1;
      }
      ans.push_back(str[i]);
      if (flag == 1) break;
    }
    i++;
    while (i < str.size()) {
      ans.push_back(str[i]);
      i++;
    }

    if (flag != 1) {
      if (str[str.size() - 1] == 'z')
        str.push_back('a');
      else
        str.push_back(str[str.size() - 1] + 1);

      cout << str << endl;
    } else {
      cout << ans << endl;
    }
  }

  return 0;
}
