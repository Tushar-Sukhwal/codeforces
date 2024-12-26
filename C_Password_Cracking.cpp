#include <bits/stdc++.h>
#define int long long
using namespace std;

bool query(string temp) {
  cout << "? " << temp << endl;
  int a;
  cin >> a;
  return a != 0;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;

    string str;

    if (!query("1")) {
      cout << "! " << string(n, '0') << endl;
      continue;
    }
    int flag = 0;
    str += '1';

    while (str.size() != n) {
      if (query(str + '1'))
        str += '1';
      else if (query(str + '0'))
        str += '0';
      else
        break;
    }

    if (str.size() == n) cout << "! " << str << endl;
    
    while (str.size() != n) {
      if (query('1' + str))
        str = '1' + str;
      else
        str = '0' + str;
    }
    cout << "! " << str << endl;
  }

  return 0;
}
