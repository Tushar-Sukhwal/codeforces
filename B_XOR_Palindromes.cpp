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
    int n;
    cin >> n;
    string arr;
    cin >> arr;

    if (n % 2 == 0) {
      vector<int> ans(n + 1, 0);
      int j = n - 1;
      int diff = 0;
      int same = 0;
      for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[j]) {
          diff++;
        } else {
          same++;
        }
        j--;
      }
      ans[diff] = 1;
      while (same) {
        diff += 2;
        same--;
        ans[diff] = 1;
      }
      for (int i = 0; i < n + 1; i++) {
        cout << ans[i];
      }
      cout << endl;
    } else {
      vector<int> ans (n+1,1) ; 
      int j = n - 1;
      int diff = 0;
      int same = 0;
      for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[j]) {
          diff++;
        } else {
          same++;
        }
        j--;
      }
      j = n ; 
      for(int i = 0 ; i<diff; i++){
        ans[i] = 0 ; 
        ans[j] = 0  ; 
        j-- ; 
      }
      




      for (int i = 0; i < n + 1; i++) {
        cout << ans[i];
      }
      cout << endl;
    }
  }

  return 0;
}
