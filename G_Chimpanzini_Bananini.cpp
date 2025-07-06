// Author :- Tushar || 13-04-2025 21:20:15
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
  int q;
  cin >> q;
  int rizz = 0;
  int size = 0;
  deque<int> dq;
  int dir = 0;
  int sum = 0;
  for (int i = 0; i < q; i++) {
    int a;
    cin >> a;

    if (a == 1) {
      if (size == 1) {
        cout << rizz << endl;
        continue;
      }

      if (dir == 0) {
        rizz -= dq.back() * size;
        rizz += sum;
        int temp = dq.back();
        dq.pop_back();
        dq.push_front(temp);
      } else {
        rizz -= dq.front() * size;
        rizz += sum;
        int temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);
      }
      cout << rizz << endl;

    } else if (a == 2) {
      if (dir == 0)
        dir = 1;
      else
        dir = 0;

      rizz = (size + 1) * sum - rizz;
      cout << rizz << endl;

    } else {
      int temp;
      cin >> temp;
      sum += temp;
      size++;
      rizz += temp * size;
      if (dir == 0)
        dq.push_back(temp);
      else
        dq.push_front(temp);
      cout << rizz << endl;
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
