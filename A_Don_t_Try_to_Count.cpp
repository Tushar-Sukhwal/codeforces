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

int isSubstring(string s1, string s2) {
  // using find method to check if s1 is
  // a substring of s2
  if (s2.find(s1) != string::npos) return s2.find(s1);
  return -1;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, m;
    cin >> n >> m;
    string org, sub;
    cin >> org >> sub;
    int flag = 0;
    for (int i = 0; i < 25; i++) {
      if (isSubstring(org, sub) != -1) {
        cout << i << endl;
        flag = 1;
        break;
      }
      sub = sub + sub;
    }
    cout << sub << endl;
    if (flag) {
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
