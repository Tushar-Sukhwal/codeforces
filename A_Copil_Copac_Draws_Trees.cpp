// Author :- Tushar
// Date:- 2024-04-15 15:51:32
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
    queue<pair<int, int>> q;
    for (int i = 0; i < n - 1; i++) {
      int a, b;
      cin >> a >> b;
      q.push({a, b});
    }
    vector<int> vis(n + 1, 0);
    int count = 0;
    vis[1] = 1;

    while (!q.empty()) {
      int size = q.size();
      count++;

      for (int i = 0; i < size; i++) {
        auto curr = q.front();
        // cout << curr.first << " " << curr.second << endl;
        q.pop();
        if (vis[curr.first] == 0 && vis[curr.second] == 1) {
          vis[curr.first] = 1;
        } else if (vis[curr.first] == 1 && vis[curr.second] == 0) {
          vis[curr.second] = 1;
        } else if (vis[curr.first] == 0 && vis[curr.second] == 0) {
          q.push(curr);
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}
