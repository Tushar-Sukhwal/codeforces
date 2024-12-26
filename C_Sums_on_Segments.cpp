// Author :- Tushar || 25-12-2024 14:12:57
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

int maxSubarraySum(vector<int>& arr) {
  int res = arr[0];

  // Outer loop for starting point of subarray
  for (int i = 0; i < arr.size(); i++) {
    int currSum = 0;

    // Inner loop for ending point of subarray
    for (int j = i; j < arr.size(); j++) {
      currSum = currSum + arr[j];

      // Update res if currSum is greater than res
      res = max(res, currSum);
    }
  }
  return res;
}

pair<int, int> getminmax(vector<int>& arr) {
  int maxx = maxSubarraySum(arr);
  for (int i = 0; i < arr.size(); i++) {
    arr[i] *= -1;
  }
  int minn = maxSubarraySum(arr);
  minn *= -1;

  return make_pair(min(0LL, minn), max(0LL, maxx));
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
    int flag = -1;
    int val = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] != -1 && arr[i] != 1) {
        flag = i;
        val = arr[i];
      }
    }

    if (n == 1) {
      if (arr[0] == 0) {
        cout << 1 << endl;
        cout << 0 << endl;

      } else {
        cout << 2 << endl;
        cout << min(arr[0], 0LL) << " " << max(arr[0], 0LL) << endl;
      }
      continue;
    }

    set<int> st;

    if (flag == -1 || flag == 0 || flag == n - 1) {
      vector<int> temp;
      for (auto it : arr) {
        if (it == -1 || it == 1) temp.push_back(it);
      }
      auto it = getminmax(temp);
      int i = it.first;
      while (i <= it.second) {
        st.insert(i);
        i++;
      }
      if (flag != -1) {
        it.first += val;
        it.second += val;
      }
      i = it.first;
      while (i <= it.second) {
        st.insert(i);
        i++;
      }
      cout << st.size() << endl;
      for (auto it : st) cout << it << " ";
      cout << endl;
    } else {
      vector<int> temp1, temp2;
      pair<int, int> sl = {0, 0}, sr = {0, 0};
      int sum = 0;
      for (int i = flag - 1; i >= 0; i--) {
        temp1.push_back(arr[i]);
        sum += arr[i];
        sl.first = min(sl.first, sum);
        sl.second = max(sl.second, sum);
      }
      reverse(temp1.begin(), temp1.end());
      sum = 0;
      for (int i = flag + 1; i < n; i++) {
        temp2.push_back(arr[i]);
        sum += arr[i];
        sr.first = min(sr.first, sum);
        sr.second = max(sr.second, sum);
      }

      auto left = getminmax(temp1);
      auto right = getminmax(temp2);
      for (int i = left.first; i <= left.second; i++) st.insert(i);
      for (int i = right.first; i <= right.second; i++) st.insert(i);

      auto mix =
          make_pair(sl.first + sr.first + val, sl.second + sr.second + val);

      for (int i = mix.first; i <= mix.second; i++) st.insert(i);

      cout << st.size() << endl;
      for (auto it : st) cout << it << " ";
      cout << endl;
    }
  }

  return 0;
}
