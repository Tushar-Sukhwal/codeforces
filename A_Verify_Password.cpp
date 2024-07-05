// Author :- Tushar
// Date:- 2024-05-30 20:06:08
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
    int flag = 0;
    int ans = 1;

    for (auto it : str) {
      if (it <= 'z' && it >= 'a') flag = 1;
      if (flag && (it > 'z' || it < 'a')) ans = 0;
    }
    if (ans == 0) {
      no continue;
    }
    string str1, str2;
    for (auto it : str) {
      if (it <= 'z' && it >= 'a')
        str2.push_back(it);
      else
        str1.push_back(it);
    }
    auto temp1 = str1;
    auto temp2 = str2;
    sort(str1.begin(), str1.end());

    sort(str2.begin(), str2.end());

    if ((temp1 != str1) || (temp2 != str2)) ans = 0;

    if (ans == 0) {
      no continue;
    } else
      yes
  }

  return 0;
}
