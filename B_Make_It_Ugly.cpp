// Author :- Tushar
// Date:- 2024-04-12 20:29:55
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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> ind;
    for (int i = 1; i < n - 1; i++) {
      if (arr[i - 1] == arr[i + 1] && arr[i] != arr[i + 1]) ind.push_back(i);
    }
    int ans = INT_MAX;

    for (auto curr : ind) {
      int i = curr - 1;
      int j = curr + 1;
      int cnt1 = 1;
      int cnt2 = 1;

      while (i > 0) {
        if (arr[i - 1] == arr[i])
          cnt1++;
        else
          break;
        i--;
      }
      while (j < n - 1) {
        if (arr[j + 1] == arr[j])
          cnt2++;
        else
          break;
        j++;
      }
      ans = min(cnt1, cnt2);
    }
    if (ans == INT_MAX)
      cout << -1 << endl;
    else
      cout << ans << endl;
  }

  return 0;
}