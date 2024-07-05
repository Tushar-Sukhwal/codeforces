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

void fill(vector<int> &v, int ind, vector<int> &ans) {
  int index = 0;
  for (int i = 0; i < v.size(); i++) {
    if (i != ind) {
      ans[index] = v[i];
      index++;
    }
  }
}

bool Check(vector<int> &v) {
  for (int i = 1; i < v.size() - 1; i++) {
    if (__gcd(v[i - 1], v[i]) > __gcd(v[i], v[i + 1])) {
      return false;
    }
  }
  return true;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      v.push_back(a);
    }
    int ambiguity = -1;

    for (int i = 1; i < n - 1; i++) {
      if (__gcd(v[i - 1], v[i]) > __gcd(v[i], v[i + 1])) {
        ambiguity = i;
        break;
      }
    }

    if (ambiguity == -1) {
      yes;
    } else {
      bool flag = true;
      vector<int> ans(n - 1);
      for (int i = ambiguity - 1; i <= ambiguity + 1; i++) {
        fill(v, i, ans);
        if (Check(ans)) {
          yes;
          flag = false;
          break;
        }
      }
      if (flag) no;
    }
  }
  return 0;
}