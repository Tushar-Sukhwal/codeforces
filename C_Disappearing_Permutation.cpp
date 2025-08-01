#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 5;
int parent[N], sz[N];

int find(int x) { return x == parent[x] ? x : parent[x] = find(parent[x]); }
void merge(int u, int v) {
  u = find(u), v = find(v);
  if (u != v) parent[u] = v, sz[v] += sz[u];
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n), q(n);
    for (int i = 1; i <= n; i++) parent[i] = i, sz[i] = 1;
    for (auto &x : arr) cin >> x;
    for (auto &x : q) cin >> x;

    for (int i = 0; i < n; i++)
      if (arr[i] >= 1 && arr[i] <= n) merge(i + 1, arr[i]);

    set<int> st;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      int par = find(q[i]);
      if (!st.count(par)) st.insert(par), ans += sz[par];
      cout << ans << " ";
    }
    cout << endl;
  }
}