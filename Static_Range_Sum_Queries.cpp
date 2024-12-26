// Author :- Tushar || 22-12-2024 19:12:39
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

  int n, m;
  cin >> n >> m;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if(i) arr[i] += arr[i - 1]; 
  }
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    if(a == 1) cout << arr[b - 1]<< endl; 
    else cout << arr[b - 1] - arr[a - 2] << endl; 
  }

  return 0;
}
