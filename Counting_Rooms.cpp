// Author :- Tushar || 13-12-2024 21:23:41
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

void dfs(vector<string>& arr, int i, int j) {
  arr[i][j] = '#';

  vector<int> xr = {1, 0, -1, 0};
  vector<int> yr = {0, 1, 0, -1};

  for (int k = 0; k < 4; k++) {
    int currx = i + xr[k];
    int curry = j + yr[k];

    if (currx >= 0 && currx < arr.size() && curry >= 0 &&
        curry < arr[0].size()) {
      if (arr[currx][curry] == '.') dfs(arr, currx, curry);
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, m;
  cin >> n >> m;
  vector<string> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count =0; 

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(arr[i][j] == '.') {
        dfs(arr, i, j); 
        count++; 
      }
    }
  }
  cout << count << endl; 

  return 0;
}
