#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> arr(26, -1);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> ans;
    vector<char> second;

    for (int i = 0; i < n; i++) {
      int c = s[i] - 'a';
      if (arr[c] == -1) arr[c] = 0;
    }
    for (int i = 0; i < 26; i++) {
      if (arr[i] == 0) {
        ans.push_back('a' + i);
      }
    }

    second = ans;

    reverse(ans.begin(), ans.end());
    for (int i = 0; i < n; i++) {
      auto it = find(second.begin(), second.end(), s[i]);

      if (it != second.end()) {
        int index = distance(second.begin(), it);
        s[i] = ans[index];
      } else {
      }
    }

    cout << s << endl;
  }

  return 0;
}