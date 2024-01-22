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
  test{
    int n , k ; cin >> n >> k ; 
    int pro = 1 ; 
    for(int i = 0 ; i<n ; i++){
      int a ; cin >> a ; 
      pro *= a ; 
    }

    if(pro <= 2023){
      if(2023%pro == 0 ){
        yes
        cout<<2023/pro<<" ";
        for(int i = 0 ; i<k-1 ; i++){
          cout<<1<<" ";
        }
      cout<<endl; 
      }
      else {
        no
      }
    }
    else {
      no
    }

  }


  return 0;
}
