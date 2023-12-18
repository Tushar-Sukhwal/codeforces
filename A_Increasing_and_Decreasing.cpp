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
    int x , y , n ; cin >> x >> y >> n ; 
    vector<int> arr(n) ; 
    arr[0] = x ; 
    arr[n-1] = y ; 
    int diff = 1 ; 
    int i ; 
    for( i = n-2 ; i>0 ; i--){
      arr[i] = arr[i+1] - diff ; 
      diff++ ; 
    }
    if(arr[1]-arr[0] >= diff){
    for(int i = 0 ; i <n ;i ++){
      cout<<arr[i]<<" ";
    }
    
    }else {
      cout<<-1;
    }
    cout<<endl; 


  }
    


  return 0;
}
