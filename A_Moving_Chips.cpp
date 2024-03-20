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
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int start = 0;
    int end = n;
    int ans = 0;

    for (int i = 0; i < n; i++) {
      if (arr[i] == 1) {
        start = i;
        break;
      }
    }
    for (int i = n - 1; i >= 0; i--) {
      if (arr[i] == 1) {
        end = i;
        break;
      }
    }

    for (int i = start; i <= end; i++) {
      if (arr[i] == 0) {
        ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
