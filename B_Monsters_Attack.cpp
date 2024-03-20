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
    int k;
    cin >> k;
    vector<int> health(n), pos(n);

    for (int i = 0; i < n; i++) {
      cin >> health[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> pos[i];
    }

    vector<int> loc(n + 1, 0);
    for (int i = 0; i < n; i++) {
      loc[abs(pos[i])] += health[i];
    }
    int sum = 0;
    for (int i = 0; i < n + 1; i++) {
      sum += loc[i];
      loc[i] = sum;
    }
    int flag = 0;
    for (int i = 0; i < n + 1; i++) {
      if (loc[i] > i * k) {
        flag = 1;
        break;
      }
    }
    if (flag) no else yes
  }
  return 0;
}
