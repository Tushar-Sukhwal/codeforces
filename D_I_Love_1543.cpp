// Author :- Tushar || 02-11-2024 21:31:25
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

int countFreq(string& pat, string& txt) {
  txt.push_back(txt[0]);
  txt.push_back(txt[1]);
  txt.push_back(txt[2]);

  int M = pat.length();
  int N = txt.length();
  int res = 0;

  /* A loop to slide pat[] one by one */
  for (int i = 0; i <= N - M; i++) {
    /* For current index i, check for
       pattern match */
    int j;
    for (j = 0; j < M; j++)
      if (txt[i + j] != pat[j]) break;

    // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
    if (j == M) {
      res++;
    }
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int li = 0, lj = 0, ri = n - 1, rj = m - 1;

    string pat = "1543";

    int count = 0;

    while (li <= ri && lj <= rj) {
      string txt;

      for (int j = lj; j <= rj; j++) txt.push_back(arr[li][j]);
      li++;

      for (int i = li; i <= ri; i++) txt.push_back(arr[i][rj]);
      rj--;

      if (li <= ri) {
        for (int j = rj; j >= lj; j--) txt.push_back(arr[ri][j]);
        ri--;
      }

      if (lj <= rj) {
        for (int i = ri; i >= li; i--) txt.push_back(arr[i][lj]);
        lj++;
      }

      count += countFreq(pat, txt);
    }
    cout << count << endl;
  }

  return 0;
}
