// clang-format off
// Author :- Tushar || 30-07-2024 17:02:16
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

vector<int> printDivisors(int n) {
  vector<int> arr;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (n / i == i)
        arr.push_back(i);
      else {
        arr.push_back(i);
        arr.push_back(n / i);
      }
    }
  }
  return arr;
}

string makeChanges(string str, int a, int b, int c) {
  int i = 0;
  while (c) {
    if ((str[i] - 'a') == a) {
      str[i] = 'a' + b;
      c--;
    }
    i++;
  }

  return str;
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
    vector<int> arr(26, 0);
    for (auto it : str) {
      arr[it - 'a']++;
    }
    map<int, int> mp;
    vector<pair<int, int>> ans;
    for (int i = 0; i < 26; i++) {
      if (arr[i] != 0) {
        mp[i] = arr[i];
        ans.push_back({i, arr[i]});
      }
    }

    vector<int> fac = printDivisors(n);

    int minn = INT_MAX;
    int minfac;
    vector<pair<int, int>> changes;
    for (auto it : fac) {
      if ((n / it) > 26) continue;
      int temp = 0;
      for (int i = 0; i < min(n / it, (long long)ans.size()); i++) {
        temp += abs(it - ans[i].second);
      }
      if (n / it < ans.size()) {
        for (int i = n / it; i < ans.size(); i++) {
          temp += abs(ans[i].second - 0);
        }
      }
      if (ans.size() < n / it) {
        for (int i = ans.size(); i < n / it; i++) {
          temp += it;
        }
      }
      if (temp < minn) {
        minn = temp;
        minfac = it;
      }
    }
    cout << minn / 2 << endl;
    int extra = 0;
    int extraamt = 0;

    for (int i = 0; i < min(n / minfac, (long long)ans.size()); i++) {
      changes.push_back({minfac - ans[i].second, ans[i].first});
    }
    if (n / minfac < ans.size()) {
      for (int i = n / minfac; i < ans.size(); i++) {
        changes.push_back({-1 * ans[i].second, ans[i].first});
      }
    }
    if (ans.size() < n / minfac) {
      for (int i = ans.size(); i < n / minfac; i++) {
        extra++;
      }
      extraamt = minfac;
    }

    sort(changes.begin(), changes.end());
    int i = 0, j = changes.size() - 1;

    while (i < j) {
      if (changes[i].first == 0) {
        i++;
        continue;
      }
      if (changes[j].first == 0) {
        j--;
        continue;
      }

      if (changes[i].first > 0) break;
      if (changes[j].first < 0) break;

      if (abs(changes[i].first) > abs(changes[j].first)) {
        int amt = abs(changes[i].first);

        str = makeChanges(str, changes[i].second, changes[j].second, amt);

        changes[j].first = 0;
        changes[i].first = (abs(changes[i].first) - amt) * -1;
      } else {
        int amt = abs(changes[i].first);

        str = makeChanges(str, changes[i].second, changes[j].second, amt);

        changes[i].first = 0;
        changes[j].first = (abs(changes[j].first) - amt);
      }
    }
    int temp = 0;
    for (auto it : arr) {
      if (it) {
        it = minfac;
      }
    }

    i = 0;
    while (i < changes.size()) {
      if (changes[i].first == 0) {
        i++;
        continue;
      }

      while (arr[temp] == minfac) temp++;

      if (minfac - arr[temp] < abs(changes[i].first)) {
        int amt = minfac - arr[temp];
        str = makeChanges(str, changes[i].second, temp, amt);

        changes[i].first = (abs(changes[i].first) - amt) * -1;
      } else {
        str = makeChanges(str, changes[i].second, temp, abs(changes[i].first));
        changes[i].first = 0;
      }
    }
    cout << str << endl;
  }

  return 0;
}
