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
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i].first;
      arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    int sum = 0;
    vector<pair<int, int>> ans;
    for (int i = 0; i < n;) {
      sum += arr[i].first;
      int k = 1;
      int temp = i;
      while (temp < n - 1 && sum >= arr[temp + 1].first) {
        k++;
        sum += arr[temp+1].first;
        temp++;
      }
      // cout << "k" << k << endl;
      while (k--) {
        ans.push_back(make_pair(arr[i++].second, i + k ));
      }
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < n; i++) {
      cout << ans[i].second << " ";
    }
    cout << endl;
  }

  return 0;
}
