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
// const ll mod = 1000000007;
// const ll mod = 998244353;

int fun(vector<pair<int, int>>& a, vector<pair<int, int>>& b,
        vector<pair<int, int>>& c) {
  int sum = 0;
  sum += a[0].first;
  int i = 0;
  while (b[i].second == a[0].second) {
    i++;
  }
  sum += b[i].first;
  int j = 0;
  while (c[j].second == a[0].second || c[j].second == b[i].second) {
    j++;
  }
  sum += c[j].first;
  // cout << a[0].second << " " << i << " " << j << " " << sum << endl;
  return sum;
}

struct PairComparator {
  bool operator()(const std::pair<long long, long long>& a,
                  const std::pair<long long, long long>& b) const {
    // Compare first elements in reverse order
    if (a.first != b.first) {
      return a.first > b.first;  // Sorting in reverse order for first elements
    }
    // If first elements are equal, compare second elements in reverse order
    return a.second > b.second;  // Sorting in reverse order for second elements
  }
};

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;

    vector<pair<int, int>> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i;
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i].first;
      b[i].second = i;
    }
    for (int i = 0; i < n; i++) {
      cin >> c[i].first;
      c[i].second = i;
    }
    sort(a.begin(), a.end(), PairComparator());
    sort(b.begin(), b.end(), PairComparator());
    sort(c.begin(), c.end(), PairComparator());

    int maxi;
    maxi = max({fun(a, b, c), fun(a, c, b), fun(b, a, c), fun(b, c, a),
                fun(c, a, b), fun(c, b, a)});
    cout << maxi << endl;
  }

  return 0;
}
