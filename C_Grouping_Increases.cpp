// Author :- Tushar
// Date:- 2024-06-01 10:03:13
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

    int ans = 0;
    int left = INT_MAX, right = INT_MAX;

    for (int i = 0; i < n; i++) {
      int temp1 = min(left, right);
      int temp2 = max(left, right);
      left = temp1;
      right = temp2;

      if (arr[i] <= left) {
        left = arr[i];
      } else if (arr[i] <= right) {
        right = arr[i];
      } else {
        left = arr[i];
        ans++;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
