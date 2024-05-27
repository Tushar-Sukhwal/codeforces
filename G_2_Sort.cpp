// Author :- Tushar
// Date:- 2024-05-24 18:44:36
#include <bits/stdc++.h>
using nam espace std;
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
    int count = 0;
    int ans = 0;

    for (int i = 1; i < n; i++) {
      if (arr[i - 1] < 2 * arr[i]) {
        count++;
      } else {
        if (count >= k) {
          ans += count - k + 1;
        }
        count = 0;
      }
    }
    if (count >= k) {
      ans += count - k + 1;
    }
    count = 0;
    cout << ans << endl;
  }

  return 0;
}
