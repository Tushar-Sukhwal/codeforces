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
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    vector<int> factors = printDivisors(n);
    sort(factors.begin(), factors.end());
    int ans = 0;

    for (int i = 0; i < factors.size(); i++) {
      int mini = INT64_MAX;
      int maxi = INT64_MIN;
      for (int j = 0; j < n / factors[i]; j++) {
        int curr = 0;
        for (int k = 0; k < factors[i]; k++) {
          curr += arr[j * factors[i] + k];
        }
        mini = min(mini, curr);
        maxi = max(maxi, curr);
      }
      ans = max(ans, abs(maxi - mini));
    }
    cout << ans << endl;
  }

  return 0;
}
