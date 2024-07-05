// Author :- Tushar
// Date:- 2024-06-11 20:31:41
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
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ind = 0;
    int total = 0;
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (auto it : arr[i]) {
        if (it == '#') sum++;
      }
      if (sum > total) {
        total = sum;
        ind = i;
      }
    }
    int start = 0, end = 0;
    int flag = 1;
    for (int i = 0; i < arr[ind].size(); i++) {
      if (flag && arr[ind][i] == '#') {
        start = i;
        flag = 0;
      }
      if (arr[ind][i] == '#') {
        end = i;
      }
    }
    cout << ind + 1 << " " << (start + end + 2) / 2 << endl;
  }

  return 0;
}
