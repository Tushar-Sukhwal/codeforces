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
    set<int> arr1, arr2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      arr1.insert(a);
      sum += a;
    }
    for (int i = 0; i < m; i++) {
      int a;
      cin >> a;
      arr2.insert(a);
    }
    int minj = *(arr1.begin());
    int maxj = *(--arr1.end());
    int ming = *(arr2.begin());
    int maxg = *(--arr2.end());
    sum += maxg - minj;
    if (k == 1) {
      cout << sum << endl;
    } else if (k % 2 == 0) {
      sum += min(ming, minj) - max(maxg, maxj);
      cout << sum << endl;
    } else {
      sum += max(maxg, maxj) - min(ming, minj);
      cout << sum << endl;
    }
  }

  return 0;
}
