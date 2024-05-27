// Author :- Tushar
// Date:- 2024-04-30 20:07:44
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

int check(deque<int> a, deque<int> b) {
  for (int i = 0; i < a.size(); i++) {
    if (a[i] > b[i]) return false;
  }
  return true;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    deque<int> arr1(n);
    for (int i = 0; i < n; i++) cin >> arr1[i];
    deque<int> arr2(n);
    for (int i = 0; i < n; i++) cin >> arr2[i];

    if (check(arr1, arr2)) {
      cout << 0 << endl;
      continue;
    }
    sort(arr1.begin(), arr1.end());
    int count = 0;
    while (true) {
      if (check(arr1, arr2)) break;
      count++;
      arr1.pop_back();
      arr1.push_front(1);
    }
    cout << count << endl;
  }

  return 0;
}
