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
    string str;
    cin >> str;
    vector<int> v(26, 0);
    for (int i = 0; i < 26; i++) {
      v[i] = i + 1;
    }
    for (int i = 0; i < n; i++) {
      v[str[i] - 64]--;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] < 1) {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}
