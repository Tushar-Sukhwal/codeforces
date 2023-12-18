#include <iostream>

using namespace std;

int main() {
  int i, j, t;
  cin >> t;
  while (t--) {
    int n, m, w = 0;
    cin >> n >> m;
    char c[n][m];
    char v[4] = {'v', 'i', 'k', 'a'};
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        cin >> c[i][j];
      }
    }
    int flag = 1;
    for (j = 0; j < m; j++) {
      for (i = 0; i < n; i++) {
        if (c[i][j] == v[w]) {
          w++;
          break;
        }
      }
      if (w == 4) {
        cout << "YES" << endl;
        flag = 0;
        break;
      }
    }
    if (flag) {
      cout << "NO" << endl;
    }
  }
  return 0;
}