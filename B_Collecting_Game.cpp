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
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      arr.push_back(make_pair(a, i));
    }
    sort(arr.begin(), arr.end());
    vector<int> prefix(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += arr[i].first;
      prefix[i] = sum;
    }
    vector<pair<int, int>> ans;
    ans.push_back(make_pair(arr[arr.size() - 1].second, arr.size() - 1));


    for (int i = arr.size() - 2; i >= 0; i--) {
      int count = i;
      for (int j = i + 1; j < arr.size(); j++) {
        if (arr[j].first <= prefix[j-1]) {
          count++;
        } else {
          break;
        }
      }
      ans.push_back(make_pair(arr[i].second, count));
    }
    sort(ans.begin() , ans.end()) ; 
    for(int i = 0 ; i<ans.size()  ; i++){
      cout<<ans[i].second<<" ";
    }
    cout<<endl ;
  }
  return 0;
}
