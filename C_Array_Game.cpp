// Author :- Tushar
// Date:- 2024-04-15 14:22:15
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
// const ll mod = 1000000007;
// const ll mod = 998244353;

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ans;
    int mini = INT64_MAX;
    if (k >= 3) {
      cout << 0 << endl;
      continue;
    }
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int a = abs(arr[i] - arr[j]);
        ans.push_back(a);
        mini = min({mini, a, arr[i], arr[j]});
      }
    }
    sort(arr.begin(), arr.end());
    if (k == 1) {
      cout << mini << endl;
      continue;
    }
    for (auto it : ans) {
      int a = lower_bound(arr.begin(), arr.end(), it) - arr.begin();
      int b = a - 1;

      if (b >= 0 && b < n) mini = min(mini, abs(arr[b] - it));
      if (a < n) mini = min(mini, abs(arr[a] - it));
    }

    cout << mini << endl;
  }

  return 0;
}
