#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool isPossibleToConnect(int n, const vector<int>& a) {
  vector<pair<int, int>> values;
  for (int i = 0; i < n; ++i) {
    values.emplace_back(a[i], i + 1);
  }

  sort(values.begin(), values.end());

  vector<pair<int, int>> edges;

  int root = values[0].second;
  for (int i = 1; i < n; ++i) {
    if ((values[i].first - values[0].first) % 1 == 0) {
      edges.emplace_back(root, values[i].second);
    }
  }

  if (edges.size() == n - 1) {
    cout << "Yes\n";
    for (const auto& edge : edges) {
      cout << edge.first << " " << edge.second << "\n";
    }
    return true;
  } else {
    return false;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    if (!isPossibleToConnect(n, a)) {
      cout << "No\n";
    }
  }

  return 0;
}
