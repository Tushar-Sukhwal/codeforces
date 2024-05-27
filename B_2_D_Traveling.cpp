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
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<int, int>> arr(n);
    int a1, a2, b1, b2;
    for (int i = 0; i < n; i++) {
      cin >> arr[i].first >> arr[i].second;
      if (i + 1 == a) {
        a1 = arr[i].first;
        a2 = arr[i].second;
      }
      if (i + 1 == b) {
        b1 = arr[i].first;
        b2 = arr[i].second;
      }
    }

    int mini = abs(a1 - b1) + abs(a2 - b2);
    if (a <= k && b <= k) {
      cout << 0 << endl;
      continue;
    }

    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < k; i++) {
      min1 = min(min1, abs(arr[i].first - a1) + abs(arr[i].second - a2));
      min2 = min(min2, abs(arr[i].first - b1) + abs(arr[i].second - b2));
    }
    mini = min(mini, min1 + min2);
    cout << mini << endl;
  }

  return 0;
}
