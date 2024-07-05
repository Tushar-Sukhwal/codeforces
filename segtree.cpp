// Author :- Tushar
// Date:- 2024-06-24 09:58:49
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

void print(vector<int>& arr) {
  for (auto i : arr) cout << i << " ";
  cout << endl;
}

vector<int> segTree;
void build(vector<int>& arr, int start, int end, int index) {
  // build the segment tree
  // time complexity O(n) ;
  if (start == end) {
    segTree[index] = arr[start];
    return;
  }
  int mid = (start + end) / 2;
  int left = 2 * index, right = 2 * index + 1;
  build(arr, start, mid, left);
  build(arr, mid + 1, end, right);
  segTree[index] = segTree[left] + segTree[right];
}

void update(vector<int>& arr, int start, int end, int index, int pos,
            int value) {
  // update the segment tree
  // time complexity O(logn) ;
  if (start == end) {
    arr[pos] = value;
    segTree[index] = value;
    return;
  }
  int mid = (start + end) / 2;
  if (mid >= pos)
    // update left part
    update(arr, start, mid, 2 * index, pos, value);
  else
    // update right part
    update(arr, mid + 1, end, 2 * index + 1, pos, value);

  segTree[index] = segTree[2 * index] + segTree[2 * index + 1];
}

int query(int start, int end, int index, int l, int r) {
  // give sum form L to R
  // time complexity O(logn) ;

  // complete overlap
  if (start >= l && end <= r) return segTree[index];
  // complete disjoint
  if (l > end || r < start) return 0;
  // partial overlap
  int mid = (start + end) / 2;
  int left = 2 * index, right = 2 * index + 1;
  int leftSum = query(start, mid, left, l, r);
  int rightSum = query(mid + 1, end, right, l, r);
  return leftSum + rightSum;
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i];
  segTree.resize(4 * n, -1);
  build(arr, 0, n - 1, 1);
  print(segTree);
  cout << "query 1 to 3 " << query(0, n - 1, 1, 1, 3) << endl;
  update(arr, 0, n - 1, 1, 1, 10);
  print(segTree);
  cout << "query 1 to 3 " << query(0, n - 1, 1, 1, 3) << endl;

  return 0;
}

// curr = 1
// left = curr * 2 , right = curr * 2 + 1