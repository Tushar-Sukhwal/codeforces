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
    int a , b , c ; cin >> a >> b >> c ; 
    int big = max(a,b) ; 
    int sml = min(a,b) ; 

    int rounds = 0 ; 
    int flag = 0 ; 
    while(1){
      if(big - sml == 0 ){
        flag = 1 ; 
        break ; 
      }
      if(sml > big ){
        flag = 2 ; 
        break ; 
      }
      if(big - sml < c ){
        break ; 
      }
      rounds++ ; 
      big -= c ; 
      sml += c ; 
    }
    // cout<<big<<" "<<sml<<endl; 
    if(flag){
      cout<<rounds<<endl; 
    } else if (flag == 2 ){
      cout<<rounds<<endl; 
    }
    
    else {
      cout<<rounds+1<<endl; 
    } 
  }


  return 0;
}
