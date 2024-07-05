// Author :- Tushar
// Date:- 2024-06-03
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
#define no cout << "NO\n";
#define yes cout << "YES\n";

int32_t main() {
  letsgooooooooooo;
  cout << fixed << setprecision(7);

  test {
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int num = arr[f - 1];
    sort(arr.begin(), arr.end(), greater<int>());

    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++) {
      if (arr[i] == num) {
        last = i + 1;
        if (first == -1) {
          first = i + 1;
        }
      }
    }

    if (last <= k) {
      yes
    } else if (first > k) {
      no
    } else {
      cout << "MAYBE" << endl;
    }
  }

  return 0;
}
