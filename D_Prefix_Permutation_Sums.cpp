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

bool isPremutation(vector<int>& arr) {
  set<int> s;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] > n || arr[i] < 1) {
      return 0;
    }
    s.insert(arr[i]);
  }
  return s.size() == arr.size();
}

int sumOfRemainingValues (set<int> s ){
  for(int i = 0 ;  )
}


int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n;
    cin >> n;
    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) {
      cin >> arr[i];
    }

    //case 1 (last element is removed )
    if (arr[n - 1] != (n * (n + 1)) / 2) {
      arr.push_back((n * (n + 1)) / 2);
      vector<int> per;
      per[0] = arr[0];
      for (int i = 1; i < n - 1; i++) {
        per[i] = arr[i] - arr[i - 1];
      }
      if (isPremutation(per)) {
        yes
        continue;
      } else {
        no
        continue;
      }
    }

    //first value deleted 
    set<int> s ; 
    vector<int> greater ; 
    for(int i = 1 ; i<n-1 ; i++){
      if(arr[i] - arr[i-1] > n ){
        greater.push_back(arr[i] - arr[i-1]);
      } s.insert(arr[i] - arr[i-1] ) ; 
    }
    if(s.size() == n-2 ){

    }else if (s.size() == n-3  ){
      if(greater.size() > 1 ){
        no continue;
      }
      


    } else {
      no 
      continue;
    }



  }

  return 0;
}
