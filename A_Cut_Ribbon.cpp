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
  int n , a , b , c ; cin >> n >> a >> b >> c ; 

  int ans = 0 ; 
  for(int i = 0 ; i<=4000 ; i++){
    for(int j = 0 ; j<=4000 ; j++){
      int cz = n - (a*i) - (b*j) ; 
      if(cz<0) break ; 

      double z = cz /(double) c ; 
      if(z == (int)z ){
        ans = max(i+j+(int)z , ans);
      }
    }
  }
  cout<<ans<<endl; 


  return 0;
}
