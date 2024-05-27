// Author :- Tushar
// Date:- 2024-04-29 20:06:39
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
    vector<int> arr(n+1);
    for (int i = 1; i < n+1; i++) cin >> arr[i];
    int flag = 0;
    for (int i = 1; i < n+1; i++) {
      if (arr[arr[i]] == i ) flag = 1;
    }
    if (flag)
      cout << 2 << endl;
    else
      cout << 3 << endl;
  }

  return 0;
}
