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

bool  isVovel(char ch ){
  if(ch == 'a' || ch == 'e' ) return true ; 
  return false ;
}

bool isC (char ch ){
  if(ch == 'b' || ch == 'c' || ch =='d') return true ; return false ; 
}

int32_t main() {
  letsgooooooooooo cout << fixed << setprecision(7);
  test{
    int n ; cin >> n ; 
    string str ; cin >> str ; 
    string ans ; 
    for(int i = 0  ;i<n  ; i++){
      if(isVovel(str[i]) && i <n-2 ){
        ans.push_back(str[i]) ; 
        if(isC(str[i+1]) && isC(str[i+2])){
          ans.push_back(str[i+1]); 
          ans.push_back('.') ; 
          ans.push_back(str[i+2]) ; 
          i = i+2 ; 
        }
        else {
          ans.push_back('.') ; 
          ans.push_back(str[i+1]);
          i = i+1 ; 
        }
      }
      
      else {
        ans.push_back(str[i]) ; 
      }
    }

    cout<<ans<<endl; 
  }


  return 0;
}
