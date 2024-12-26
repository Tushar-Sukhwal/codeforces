// Author :- Tushar || 18-12-2024 03:30:05
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
    for (int i = 0; i < n; i++) cin >> arr[i];

    int last = 1;
    int flag = 1;
    vector<int> ans;
    ans.push_back(1);
    for (int i = 1; i < n - 1; i++) {
      if (arr[i] != arr[i - 1]) {
        flag = 2;
        if (last == 1) {
          ans.push_back(2);
          last = 2;
        } else {
          ans.push_back(1);
          last = 1;
        }
      } else {
        ans.push_back(last);
      }
    }
    if (arr[n - 2] != arr[n - 1] && arr[n - 1] != arr[0]) flag = 3;
    cout << flag << endl;

    for (auto it : ans) cout << it << " ";

    if (arr[n - 2] != arr[n - 1] && arr[n - 1] != arr[0])
      cout << 3 << " ";
    else if (arr[n - 2] == arr[n - 1])
      cout << last << " ";
    else
      cout << 1 << " ";

    cout << endl;
  }

  return 0;
}
