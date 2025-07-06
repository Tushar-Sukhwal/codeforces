// Author :- Tushar || 12-02-2025 20:23:06
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

void solve() {
  int n, m;
  cin >> n >> m;
  deque<int> a(n);
  for (auto &it : a) cin >> it;
  deque<int> b(m);
  for (auto &it : b) cin >> it;

  int minn = *min_element(b.begin(), b.end());

  while (b.front() != minn) {
    int temp = b.back();
    b.pop_back();
    b.push_front(temp);   
  }

  int i = 0;
  while (i < n && a[i] < minn) i++;
  cout << i << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }

  return 0;
}
