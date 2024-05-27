// Author :- Tushar
// Date:- 2024-04-27 21:52:47
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

void solve(){


  
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n, k;
    cin >> k;

    vector<int> arr;
    int count = 0;
    for (int i = 0; i < 25; i++) {
      arr.push_back(i + 1);
      count += i + 1;
      if (count >= k / 2) break;
    }
    if (count >= k) {
      arr.pop_back();
    }
  }

  return 0;
}
