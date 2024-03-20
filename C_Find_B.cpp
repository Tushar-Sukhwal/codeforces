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
    vector<int> arr(n + 2);
    for (int i = 0; i < n; i++) {
      cin >> arr[i + 1];
    }
    vector<pair<int, int>> q;
    for (int i = 0; i < k; i++) {
      int a, b;
      cin >> a >> b;
      q.push_back(make_pair(a, b));
    }
    vector<int> ones(n + 2, 0);
    int temp = 0;
    for (int i = 0; i < n + 2; i++) {
      if (arr[i] == 1) temp++;
      ones[i] = temp;
    }

    vector<int> pre(n + 2, 0);
    temp = 0;
    for (int i = 0; i < n + 2; i++) {
      temp += arr[i];
      pre[i] = temp;
    }

    for (int i = 0; i < k; i++) {
      int one = ones[q[i].second + 1] - ones[q[i].first - 1];
      int sum = pre[q[i].second] - pre[q[i].first - 1];

      // cout << one << " " << sum << endl;

      if (q[i].second == q[i].first ||
          one * 2 + q[i].second - q[i].first + 1 >= sum)
        no else yes
    }
  }

  return 0;
}
