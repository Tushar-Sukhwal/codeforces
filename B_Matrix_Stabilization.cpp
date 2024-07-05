// Author :- Tushar
// Date:- 2024-06-23
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define letsgooooooooooo            \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define test         \
  int Tushars_07;    \
  cin >> Tushars_07; \
  while (Tushars_07--)
#define endl "\n"
#define no cout << "NO \n";
#define yes cout << "YES \n";

int32_t main() {
  letsgooooooooooo cout << setprecision(7);
  test {
    int x, y;
    cin >> x >> y;

    vector<vector<int>> arr(x, vector<int>(y));
    for (int i = 0; i < x; i++) {
      for (int j = 0; j < y; j++) {
        cin >> arr[i][j];
      }
    }

    vector<vector<int>> ans(x, vector<int>(y));
    vector<int> dr = {-1, 0, 1, 0};
    vector<int> dc = {0, -1, 0, 1};

    for (int i = 0; i < x; i++) {
      for (int j = 0; j < y; j++) {
        int flag = 1;
        int maxx = INT_MIN;
        for (int k = 0; k < 4; k++) {
          int nr = i + dr[k];
          int nc = j + dc[k];

          if (nr >= 0 && nr < x && nc >= 0 && nc < y) {
            if (arr[nr][nc] >= arr[i][j]) {
              flag = 0;
              break;
            } else {
              maxx = max(maxx, arr[nr][nc]);
            }
          }
        }

        if (flag && maxx != INT_MIN) {
          ans[i][j] = maxx;
        } else {
          ans[i][j] = arr[i][j];
        }
      }
    }
    for (auto it : ans) {
      for (auto itt : it) {
        cout << itt << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
