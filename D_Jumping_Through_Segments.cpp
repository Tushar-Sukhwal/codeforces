// Author :- Tushar
// Date:- 2024-04-15 13:22:00
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

bool calc(vector<pair<int, int>>& arr, int n) {
  int sum = 0;
  //
  for (int i = 0; i < arr.size(); i++) {
    sum += n;
    // cout << sum << " " << arr[i].second << endl;
    if (arr[i].second < sum) {
      sum = min(arr[i].second, sum);
    } else {
      return 0;
    }
  }
  return 1;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      arr[i] = {a, b};
    }
    int low = 0;
    int high = 1e9;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (calc(arr, mid)) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    cout << low << endl;
  }

  return 0;
}
