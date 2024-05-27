// Author :- Tushar
// Date:- 2024-04-08 21:26:43
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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int, int> mp;
    for (int i = 0; i < m; i++) {
      int a;
      cin >> a;
      mp[a]++;
    }

    int i = n - 1;

    int sum = 0;
    map<int, int> temp;
    vector<int> ans(n, 0);
    while (i >= 0) {
      if (mp.count(arr[i])) {
        if (temp[arr[i]] < mp[arr[i]]) {
          temp[arr[i]]++;
          sum++;
        }
      }

      ans[i] = sum;
      i--;
      if (temp.count(arr[i + m])) {
        temp[arr[i + m]]--;
        sum--;
      }
    }
    int ct = 0;
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
  }

  return 0;
}
