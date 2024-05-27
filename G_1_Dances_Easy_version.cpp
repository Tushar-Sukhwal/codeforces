// Author :- Tushar
// Date:- 2024-04-15 14:56:36
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
  test {
    int n, m;
    cin >> n >> m;
    deque<int> a(n);
    a[0] = 1;
    for (int i = 1; i < n; i++) cin >> a[i];
    deque<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int count = 0;
    while (a.size()) {
      if (b[0] > a[0]) {
        a.pop_front();
        b.pop_front();
      } else {
        count++;
        b.pop_front();
        a.pop_back();
      }
    }
    cout << count << endl;
  }

  return 0;
}
