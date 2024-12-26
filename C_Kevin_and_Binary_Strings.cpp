#include <bits/stdc++.h>
#define int long long
using namespace std;

bool comp(vector<int>& arr, vector<int>& brr) {
  int n = min(arr.size(), brr.size());
  for (int i = 0; i < n; i++) {
    if (arr[i] > brr[i]) return true;
    if (arr[i] < brr[i]) return false;
  }
  return arr.size() <= brr.size();
}
 
int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int tt;
  cin >> tt;
  while (tt--) {
    string str;
    cin >> str;
    int n = str.size();
    string temp = str;

    reverse(str.begin(), str.end());
    int count = 0;

    // Count trailing ones and remove them
    while (!str.empty() && str.back() == '1') {
      str.pop_back();
      count++;
    }
    reverse(str.begin(), str.end());

    // If all characters were '1'
    if (str.empty()) {
      cout << 0 << endl;
      continue;
    }

    // Flip remaining bits
    for (char& ch : str) {
      ch = (ch == '1') ? '0' : '1';
    }

    vector<int> curr;
    int mark = 0;  // Initialize mark
    int size = n - count;

    for (int i = 0; i <= n - size; i++) {
      vector<int> temp;
      for (int j = 0; j < size; j++) {
        if (str[i + j] == '1') {
          temp.push_back(j);
        }
      }
      // Compare with current best
      if ( comp(temp, curr)) {
        curr = temp;
        mark = i;  // Update mark
      }
    }
    cout << mark << endl;
  }

  return 0;
}
