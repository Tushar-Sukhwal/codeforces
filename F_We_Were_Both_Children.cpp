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
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
// const ll mod = 1000000007;
// const ll mod = 998244353;
 
  
int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test {
    int n ; cin >> n ; 
    map<int,int> m ; 
    for(int i = 0 ; i <n; i++){
      int temp ; cin >> temp ; 
      m[temp]++; 

    }
    int ans = 0; 
    vector<int> arr(n+1,0) ; 
    for(int i = 1 ; i<=n ; i++){
      int currMul = i ; 
      while(currMul<=n){
        arr[currMul] += m[i] ; 
        currMul += i ; 
      }
      ans = max(ans,arr[i]) ; 

    }
      cout<<ans<<endl ;
  }


  return 0;
}
