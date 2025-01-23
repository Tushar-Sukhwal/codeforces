// Author :- Tushar || 11-01-2025 16:22:40
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

int casing(char ch) {
  if (ch <= 'Z' && ch >= 'A') return 1;
  return 2;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;
  cin >> str;

  vector<int> upper, lower;

  int up = 0, lo = 0;
  int i;
  for (i = 0; i < str.size(); i++) {
    if (i) {
      if (casing(str[i]) != casing(str[i - 1])) {
        if (up != 0) {
          upper.push_back(up);
          lower.push_back(0);
          up = 0;
        } else {
          upper.push_back(0);
          lower.push_back(lo);
          lo = 0;
        }
      }
    }

    if (str[i] <= 'Z' && str[i] >= 'A')
      up++;
    else
      lo++;
  }
  i--;

  if (up != 0) {
    upper.push_back(up);
    lower.push_back(0);
    up = 0;
  } else {
    upper.push_back(0);
    lower.push_back(lo);
    lo = 0;
  }


  int sum = 0;
  for (int i = 0; i < upper.size(); i++) {
    sum += upper[i];
    upper[i] = sum;
  }
  sum = 0;
  for (int i = lower.size() - 1; i >= 0; i--) {
    sum += lower[i];
    lower[i] = sum;
  }

  int ans = INT_MAX;
  ans = min({ans, upper.back(), lower.front()});
  for (int i = 0; i < upper.size(); i++) {
    ans = min(ans, upper.back() - upper[i] + lower.front() - lower[i]);
  }

  cout << ans << endl;

  return 0;
}
