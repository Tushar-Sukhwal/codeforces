// Author :- Tushar
// Date:- 2024-04-07 12:12:30
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
    vector<int> ans(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    ans[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--) {
      if (arr[i + 1] == arr[i]) {
        ans[i] = ans[i + 1];
      } else {
        ans[i] = i + 2;
      }
    }
    int q;
    cin >> q;
    // for (int i = 0; i < arr.size(); i++) cout << ans[i] << " ";
    // cout << endl;
    for (int i = 0; i < q; i++) {
      int a, b;
      cin >> a >> b;
      if (ans[a - 1] == -1)
        cout << -1 << " " << -1 << endl;
      else if (ans[a - 1] > b)
        cout << -1 << " " << -1 << endl;
      else
        cout << a << " " << ans[a - 1] << " " << endl;
    }
    cout << endl;
  }

  return 0;
}
