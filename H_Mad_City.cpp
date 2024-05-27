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
#include<stdio.h>




int cycle(vector<vector<int>>& arr, vector<int>& vis, int a, int par, int pri) {
  // cout << a << endl;
  if (vis[a] == 1 && a == pri) return -2;
  if (vis[a] == 1) return a;
  vis[a] = 1;
  int ret = -1;
  for (int i = 0; i < arr[a].size(); i++) {
    if (arr[a][i] != par) {
      int temp = cycle(arr, vis, arr[a][i], a, pri);
      if (temp == -2) return -2;
      ret = max(temp, ret);
      if (ret > 0) return ret;
    }
  }
  return ret;
}
int minDis(vector<vector<int>>& arr, vector<int>& vis, int a, int b, int dis) {
  if (a == b) return dis;
  if (vis[a] == 1) return INT_MAX;
  int ret = INT_MAX;
  vis[a] = 1;
  for (int i = 0; i < arr[a].size(); i++) {
    if (vis[arr[a][i]] == 0) {
      int temp = minDis(arr, vis, arr[a][i], b, dis + 1);
      if (temp != INT_MAX)  // Check for valid paths
        ret = min(ret, temp);
    }
  }
  vis[a] = 0;  // Reset the visited flag after exploring all paths from node a
  return ret;
}



int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, a, b;
    cin >> n >> a >> b;

    vector<vector<int>> arr(n + 1);
    for (int i = 0; i < n; i++) {
      int v, u;
      cin >> v >> u;
      arr[v].push_back(u);
      arr[u].push_back(v);
    }
    if (a == b) {
      no continue;
    }
    vector<int> vis(n + 1, 0);
    int temp = cycle(arr, vis, b, -1, b);
    // cout << endl;
    if (temp == -2) {
      yes
    } else {
      vis = vector<int>(n + 1, 0);
      int u = minDis(arr, vis, a, temp, 0);
      int v = minDis(arr, vis, b, temp, 0);
      if (v < u) yes else no
    }
  }

  return 0;
}

