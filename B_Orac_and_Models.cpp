// Author :- Tushar
// Date:- 2024-06-28 14:42:18
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

vector<int> printDivisors(int n) {
  // Note that this loop runs till square root
  vector<int> arr;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      // If divisors are equal, print only one
      if (n / i == i)
        arr.push_back(i);

      else {  // Otherwise print both

        arr.push_back(i);
        arr.push_back(n / i);
      }
    }
  }
  return arr;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }
    vector<int> dp(n + 1, 0);

    int maxx = 1;

    for (int i = 1; i < n + 1; i++) {
      int temp = i;
      if (i == 1) {
        dp[i] = 1;
        continue;
      }

      int ans = 0;
      int iter = 2;

      vector<int> factors = printDivisors(i);
      for (auto it : factors) {
        if ((arr[i - 1] > arr[(it)-1])) {
          ans = max(ans, dp[it]);
        }
      }
      dp[temp] = ans + 1;
      maxx = max(maxx, dp[temp]);
    }
    cout << maxx << endl;
  }

  return 0;
}
