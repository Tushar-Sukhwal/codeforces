// Author :- Tushar
// Date:- 2024-04-10 19:34:19
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
const int mod = 998244353;

int fact(int n) {
  int ans = 1;
  for (int i = 1; i <= n; i++) ans = (ans * i) % mod;
  return ans;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    string str;
    cin >> str;
    vector<int> arr;
    int count = 0;
    char temp = str[0];
    for (int i = 0; i < str.size(); i++) {
      if (str[i] == temp)
        count++;
      else {
        arr.push_back(count);
        count = 1;
        temp = str[i];
      }
    }
    arr.push_back(count);
    int ans = fact(str.size() - arr.size());
    for (int i = 0; i < arr.size(); i++) {
      ans = (ans * arr[i]) % mod;
    }
    cout << str.size() - arr.size() << " " << ans << endl;
  }

  return 0;
}
