// clang-format off
// Author :- Tushar || 30-07-2024 20:40:03
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

int calculateCost(const string& s) {
  stack<int> st;
  int cost = 0;
  int n = s.size();

  for (int i = 0; i < n; i++) {
    if (s[i] == '(') {
      st.push(i);
    } else if (s[i] == ')') {
      if (!st.empty()) {
        int ps = st.top();
        st.pop();
        cost += (i - ps);
      }
    }
  }

  return cost;
}

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

    int op = 0, cl = 0;
    for (auto it : str) {
      if (it == '(') op++;
      if (it == ')') cl++;
    }

    op = n / 2 - op;
    cl = n / 2 - cl;

    int temp = 0;

    for (int i = 0; i < n; i++) {
      if (str[i] == '(') temp++;
      if (str[i] == ')') temp--;
      if (str[i] == '_') {
        if (temp > 0) {
          if (cl > 0) {
            str[i] = ')';
            cl--;
            temp--;
          } else {
            str[i] = '(';
            op--;
            temp++;
          }
        } else {
          if (op > 0) {
            str[i] = '(';
            op--;
            temp++;
          } else {
            str[i] = ')';
            cl--;
            temp--;
          }
        }
      }
    }

    cout << calculateCost(str) << endl;
  }

  return 0;
}
