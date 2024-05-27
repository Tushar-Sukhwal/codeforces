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
    map<int, set<int>> m;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      for (int j = 0; j < a; j++) {
        int b;
        cin >> b;
        m[b].insert(i+1);
      }
    }
    map<int, int> ma;
    for (auto it = m.begin(); it != m.end(); it++) {
      // cout << (*it).first << " " << (*it).second.size() << endl;
      if ((*it).second.size() == 1) {
        ma[*((*it).second.begin())]++;
      }
    }

    int temp = INT_MAX;
    for (auto it = ma.begin(); it != ma.end(); it++) {
      // cout << (*it).second << " ";
      temp = min(temp, (*it).second);
    }
    // cout << endl;
    if (temp == INT_MAX) temp = 0;
    cout << m.size() - temp << endl;
  }

  return 0;
}
