#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000 + 100;

int n, m;
unordered_map<int, char> grid[MAX_N];
unordered_map<int, int> component_id[MAX_N];
unordered_map<int, int> component_size;
int curr_id;
#define ll long long

int dfs(int i, int j) {
  if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '.' ||
      component_id[i][j] != -1) {
    return 0;
  }

  component_id[i][j] = curr_id;
  int size = 1;

  size += dfs(i - 1, j);
  size += dfs(i + 1, j);
  size += dfs(i, j - 1);
  size += dfs(i, j + 1);

  return size;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    cin >> n >> m;

    component_size.clear();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> grid[i][j];
        component_id[i][j] = -1;
      }
    }

    curr_id = 1;
    int ans = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == '#' && component_id[i][j] == -1) {
          component_size[curr_id] = dfs(i, j);
          ans = max(ans, component_size[curr_id]);
          curr_id++;
        }
      }
    }

    int max_size = ans;

    for (int i = 0; i < n; i++) {
      int extra = 0;
      unordered_set<int> s;

      for (int j = 0; j < m; j++) {
        if (grid[i][j] == '#') {
          s.insert(component_id[i][j]);
        } else {
          extra++;
          // checking any other component is present in the same row or column

          // check up down left and right of the current cell
          if (i > 0 && grid[i - 1][j] == '#') {
            s.insert(component_id[i - 1][j]);
          }
          if (i < n - 1 && grid[i + 1][j] == '#') {
            s.insert(component_id[i + 1][j]);
          }

          if (j > 0 && grid[i][j - 1] == '#') {
            s.insert(component_id[i][j - 1]);
          }

          if (j < m - 1 && grid[i][j + 1] == '#') {
            s.insert(component_id[i][j + 1]);
          }
        }
      }

      auto it = s.begin();
      while (it != s.end()) {
        extra += component_size[*it];
        it++;
      }
      max_size = max(max_size, extra);
    }

    // do this for column also

    for (int j = 0; j < m; j++) {
      int extra = 0;
      unordered_set<int> s;

      for (int i = 0; i < n; i++) {
        if (grid[i][j] == '#') {
          s.insert(component_id[i][j]);
        } else {
          extra++;
          // checking any other component is present in the same row or column

          // check up down left and right of the current cell
          if (i > 0 && grid[i - 1][j] == '#') {
            s.insert(component_id[i - 1][j]);
          }
          if (i < n - 1 && grid[i + 1][j] == '#') {
            s.insert(component_id[i + 1][j]);
          }

          if (j > 0 && grid[i][j - 1] == '#') {
            s.insert(component_id[i][j - 1]);
          }

          if (j < m - 1 && grid[i][j + 1] == '#') {
            s.insert(component_id[i][j + 1]);
          }
        }
      }

      auto it = s.begin();
      while (it != s.end()) {
        extra += component_size[*it];
        it++;
      }
      max_size = max(max_size, extra);
    }

    cout << max_size << endl;
  }

  return 0;
}