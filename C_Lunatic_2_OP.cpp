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

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  int n;
  cin >> n;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    m[a]++;
  }
  vector<int> arr;
  while (m.size() > 0) {
    for (auto it = m.begin(); it != m.end();) {
      if (it->second > 0) {
        (it->second)--;
        arr.push_back(it->first);
        ++it;
      } else {
        it = m.erase(it);  // Fix: assign the result of erase to the iterator
      }
    }
  }
  int count = 0;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] < arr[i + 1]) {
      count++;
    }
  }
  cout << count;

  return 0;
}
