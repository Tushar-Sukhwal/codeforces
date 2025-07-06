// Author :- Tushar || 08-04-2025 20:20:07
#include <bits/stdc++.h>
#define int long long
using namespace std;
/*
    ∧＿∧
　 (｡･ω･｡)つ━☆・*。
  ⊂/　 /　   ・゜
　しーＪ　　　     °。+ * 。　
　　　　　                .・゜
*/

long long binpow(long long a, long long b) {
  long long ans = 1;
  while (b > 0) {
    if (b & 1) ans = ans * a;
    a = a * a;
    b >>= 1;
  }
  return ans;
}

long long binpow(long long a, long long b, long long m) {
  a %= m;
  long long ans = 1;
  while (b > 0) {
    if (b & 1) ans = ans * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return ans;
}

pair<int, int> cords(int n, int d) {
  if (n == 1) {
    if (d == 1)
      return {1, 1};
    else if (d == 2)
      return {2, 2};
    else if (d == 3)
      return {2, 1};
    else
      return {1, 2};
  }
  int half = binpow(2, n - 1);
  int s = half * half;

  // top left
  if (d <= s) {
    auto ans = cords(n - 1, d);
    return ans;

  }
  // bottom right
  else if (d <= 2 * s) {
    auto ans = cords(n - 1, d - s);
    ans.first += half;
    ans.second += half;
    return ans;
  }
  // bottom left
  else if (d <= 3 * s) {
    auto ans = cords(n - 1, d - 2 * s);
    ans.first += half;
    return ans;
  }
  // top right
  else {
    auto ans = cords(n - 1, d - 3 * s);
    ans.second += half;
    return ans;
  }
}

int num(int n, int x, int y) {
  if (n == 1) {
    if (x == 1 && y == 1)
      return 1;
    else if (x == 2 && y == 2)
      return 2;
    else if (x == 2 && y == 1)
      return 3;
    else
      return 4;
  }
  int half = binpow(2, n - 1);
  int s = half * half;
  // top left
  if (x <= half && y <= half) {
    return num(n - 1, x, y);
  }
  // bottom right
  else if (x > half && y > half) {
    return s + num(n - 1, x - half, y - half);
  }
  // bottom left
  else if (x > half) {
    return 2 * s + num(n - 1, x - half, y);
  }
  // top right
  else {
    return 3 * s + num(n - 1, x, y - half);
  }
}

void solve() {
  int n, q;
  cin >> n >> q;

  for (int i = 0; i < q; i++) {
    string dir;
    cin >> dir;
    if (dir == "->") {
      int x, y;
      cin >> x >> y;
      cout << num(n, x, y) << endl;
    } else {
      int d;
      cin >> d;
      auto it = cords(n, d);
      cout << it.first << " " << it.second << endl;
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int tt = 0;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
