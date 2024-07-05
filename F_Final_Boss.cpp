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
    int h, n;
    cin >> h >> n;
    vector<int> arr1(n), arr2(n);

    for (int i = 0; i < n; i++) cin >> arr1[i];

    for (int i = 0; i < n; i++) cin >> arr2[i];

    int low = 1, high = 1e15, ans;

    while (low <= high) {
      int mid = (low + high) / 2;
      int temp = h;

      for (int i = 0; (i < n) && temp > 0; i++)
        temp = temp - ((mid - 1) / arr2[i] + 1) * arr1[i];

      if (temp <= 0) {
        ans = mid;
        high = mid - 1;
      } else
        low = mid + 1;
    }

    cout << ans << endl;
  }

  return 0;
}
