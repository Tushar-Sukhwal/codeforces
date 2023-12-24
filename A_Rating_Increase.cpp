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
    string str;
    cin >> str;
    int flag = 0;
    int num = 0;
    for (int i = 1; i < str.size(); i++) {
      if (str[i] != '0') {
        flag = 1;
        num = i;
        break;
      }
    }
    string str1 = "", str2 = "";

    if (flag == 1) {
      for (int i = 0; i < num; i++) {
        str1.push_back(str[i]);
      }
      for (int i = num; i < str.size(); i++) {
        str2.push_back(str[i]);
      }
      if (stoi(str1) < stoi(str2)) {
        cout << str1 << " " << str2 << endl;
      } else {
        cout << -1 << endl;
      }
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
