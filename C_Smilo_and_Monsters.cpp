// Author :- Tushar
// Date:- 2024-04-07 15:13:30
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
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    if (sum % 2 == 1) {
      ans = 1;
      arr[0]--;
    }

    int k = sum / 2;

    int c = 0;
    int i = 0;
    while (i < n && c + arr[i] <= k) {
      c += arr[i];
      i++;
    }
    ans = ans + k + (n - i);
    cout << ans << endl;
  }

  return 0;
}
