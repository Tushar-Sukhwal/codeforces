#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b;
    cin >> a >> b;
    deque<char> dq;
    if (a % 2) {
      dq.push_back('1');
      a--;
    }

    while (b > 0) {
      dq.push_back('2');
      b--;
      if (b <= 0) break;
      dq.push_front('2');
      b--;
    }
    while (a > 0) {
      dq.push_back('1');
      a--;
      if (a <= 0) break;
      dq.push_front('1');
      a--;
    }

    for (auto it : dq) cout << it;
    cout << endl;
  }
}
