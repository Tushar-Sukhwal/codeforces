// Author :- Tushar
// Date:- 2024-04-29 20:22:40
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
    int sum = 0;
    for (int i = 0; i < k; i++) {
      int src = 0;
      int dsc = 0;
      int maxi = INT_MIN;
      for (int j = 1; j < n; j++) {
        if (abs(arr[j] - arr[j - 1]) > maxi) {
          maxi = abs(arr[j] - arr[j - 1]);
          if (arr[j] > arr[j - 1]) {
            src = j - 1;
            dsc = j;
          } else {
            src = j;
            dsc = j - 1;
          }
        }
      }
      arr[dsc] = arr[src];
    }
    for (int i = 0; i < n; i++) {
      sum += arr[i];
    }

    cout << sum << endl;
  }

  return 0;
}
