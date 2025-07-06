// Author :- Tushar || 11-02-2025 21:06:39
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

int query(int i, int j) {
  int num;
  cout << "? " << i + 1 << " " << j + 1 << endl;
  cin >> num;
  return num;
}

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  set<int> st;
  int temp;
  int flag = 1;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (st.count(arr[i])) {
      temp = arr[i];
      flag = 0;
    } else {
      st.insert(arr[i]);
    }
  }

  if (flag == 0) {

    for (int i = 0; i < n; i++) {
      if (!st.count(i + 1)) {
        if (i == 0) {
          int one = query(0, 1);
          if (one == 0) {
            cout << "! A" << endl;
            return;
          } else {
            cout << "! B" << endl;
            return;
          }
        } else {
          int one = query(i, 0);
          if (one == 0) {
            cout << "! A" << endl;
            return;
          } else {
            cout << "! B" << endl;
            return;
          }
        }
      }
    }
  } else {
    int a, b;
    for (int i = 0; i < n; i++) {
      if (arr[i] == n) b = i;
      if (arr[i] == 1) a = i;
    }

    int one = query(a, b);
    int two = query(b, a);

    if (one > n - 1) {
      cout << "! B" << endl;
      return;
    } else if (one == n - 1) {
      if (two == n - 1) {
        cout << "! B" << endl;
        return;
      } else {
        cout << "! A" << endl;
        return;
      }
    } else {
      cout << "! A" << endl;
      return;
    }
  }
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
