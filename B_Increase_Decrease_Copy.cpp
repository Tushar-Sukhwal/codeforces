// Author :- Tushar
// Date:- 2024-05-30 20:13:15
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
    vector<int> arr1(n);
    vector<int> arr2(n + 1);
    set<int> s;
    for (int i = 0; i < n; i++) {
      cin >> arr1[i];
      s.insert(arr1[i]);
    }
    for (int i = 0; i < n + 1; i++) {
      cin >> arr2[i];
      if (i != n) s.insert(arr2[i]);
    }
    int flag = 0;
    int upp = arr2[n];
    for (int i = 0; i < n; i++) {
      if ((upp < arr2[i] && upp > arr1[i]) || (upp > arr2[i] && upp < arr1[i]))
        flag = 1;
    }

    int mini = INT_MAX;

    int val = -1;
    for (auto it : s) {
      if (abs(arr2[n] - it) < mini) {
        mini = abs(arr2[n] - it);
        val = it;
      }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans += abs(arr1[i] - arr2[i]);
    }
    if (!flag) ans += abs(val - arr2[n]);

    cout << ans + 1 << endl;
  }

  return 0;
}
