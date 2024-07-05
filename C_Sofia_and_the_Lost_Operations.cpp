// Author :- Tushar
// Date:- 2024-06-03
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define letsgooooooooooo            \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define test \
  int t;     \
  cin >> t;  \
  while (t--)
#define endl "\n"
#define no cout << "NO \n";
#define yes cout << "YES \n";

int32_t main() {
  letsgooooooooooo;
  cout << fixed << setprecision(7);
  test {
    int n, m;
    cin >> n;
    vector<int> arr(n);
    vector<int> b(n);
    map<int, int> mp, bp;

    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      bp[b[i]]++;
    }

    cin >> m;
    bool flag = true;
    int ambiguity = 0;

    for (int i = 0; i < n; i++) {
      if (b[i] != arr[i]) {
        mp[b[i]]++;
      }
    }
    int temp;
    for (int i = 0; i < m; i++) {
      cin >> temp;
      if (bp.count(temp)) ambiguity = i + 1;

      if (mp.count(temp)) {
        mp[temp]--;
        if (mp[temp] == 0) mp.erase(temp);
      }
    }

    if (!flag || !mp.empty() || ambiguity < m) no else yes
  }

  return 0;
}