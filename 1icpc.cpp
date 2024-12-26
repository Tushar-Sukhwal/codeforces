// Author :- Tushar || 16-11-2024 19:05:30
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

void printEdges(const vector<vector<int>>& arr) {
  for (int i = 1; i < arr.size(); i++) {
    for (int j : arr[i]) {
      cout << i << " " << j << endl;
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
    int n, d, l;
    cin >> n >> d >> l;

    vector<vector<int>> arr(n + 1);

    int ct = 1;


    

    cout << endl;

    // Call the function to print the edges
    printEdges(arr);
  }

  return 0;
}
