// Author :- Tushar || 15-12-2024 20:22:15
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

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      arr[i] = a;
      st.insert(a);
    }
    queue<int> q;
    for (int i = 1; i <= n; i++) {
      if (!st.count(i)) q.push(i);
    }

    set<int> st2;

    for (int i = 0; i < n; i++) {
      if (st2.count(arr[i])) {
        arr[i] = q.front();
        q.pop();
      } else {
        st2.insert(arr[i]);
      }
    }

    for (auto it : arr) cout << it << " ";
    cout << endl;
  }

  return 0;
}
