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

int cal(vector<int> arr1, vector<int> arr2) {
  int sum = 0;
  for (int i = 0; i < arr1.size(); i++) {
    sum += abs(arr1[i] - arr2[i]);
  }
  return sum;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) cin >> arr[i][j];
    int ans = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 1 + i; j < n; j++) {
        ans += cal(arr[i], arr[j]);
      }
    }
    cout << ans << endl;
  }

  return 0;
}
