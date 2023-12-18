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
  int n, m;
  cin >> n >> m;
  vector<int> arr1(n), arr2(m);
  int min1 = INT_MAX, max1 = INT_MIN, min2 = INT_MAX;
  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
    if (arr1[i] < min1) min1 = arr1[i];
    if (arr1[i] > max1) max1 = arr1[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> arr2[i];
    if (arr2[i] < min2) min2 = arr2[i];
  }
  // cout<<max(min1*2,max1)<<" "<<min2;
  if (max(min1 * 2, max1) < min2) {
    cout << max(min1 * 2, max1);
  } else {
    cout << -1 << endl;
  }

  return 0;
}
