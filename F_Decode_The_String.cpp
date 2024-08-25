#include <bits/stdc++.h>

using namespace std;

int query(int a, int b, char ch) {
  int ans;
  cout << "?" << " " << ch << " " << a << " " << b << endl;

  cin >> ans;

  return ans;
}

void recc(int a, int b, char ch, vector<char> &arr) {
  if (b < a) return;

  if (query(a, b, ch) == 0) {
    return;
  }

  if (a == b) {
    arr[a - 1] = ch;
    return;
  }
  recc(a, (a + b) / 2, ch, arr);
  recc(((a + b) / 2) + 1, b, ch, arr);
}

int32_t main() {
  int n;
  cin >> n;

  vector<char> arr(n);

  for (int i = 0; i < 26; i++) {
    recc(1, n, (char)i + 'a', arr);
  }
  string str;

  for (auto it : arr) str.push_back(it);
  cout << "! " << str << endl;

  return 0;
}