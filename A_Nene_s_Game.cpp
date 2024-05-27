// Author :- Tushar
// Date:- 2024-04-13 20:07:47
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
    int k, q;
    cin >> k >> q;
    vector<int> arr1(k);
    int mini = INT_MAX;
    for (int i = 0; i < k; i++) {
      cin >> arr1[i];
      mini = min(mini, arr1[i]);
    }
    vector<int> arr2(q);
    for (int i = 0; i < q; i++) {
      cin >> arr2[i];
    }

    for (int i = 0; i < q; i++) {
      cout << min(mini - 1, arr2[i]) << " ";
    }
    cout << endl;
  }

  return 0;
}
