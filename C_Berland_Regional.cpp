// Author :- Tushar
// Date:- 2024-06-01 14:15:07
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
    map<int, map<int, int, greater<int>>> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> ski(n);
    for (int i = 0; i < n; i++) cin >> ski[i];
    for (int i = 0; i < n; i++) {
      m[arr[i]][ski[i]]++;
    }
    vector<int> 
    for (const auto& it : m) {

      }
  }

  return 0;
}
