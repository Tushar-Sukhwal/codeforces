#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,vb,vs;
  cin>>n>>vb>>vs;
  vector<int> arr(n);
  for(int i = 0; i < n; i++)
    cin>>arr[i];
  int x,y;
  cin>>x>>y;
  int id = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
  if(id != 0 && id != n-1){
    int p = id-1;
    int l = id;
    if(abs(x - arr[p]) < abs(x - arr[l]))
Z
      cout<<p+1;
    else
      cout<<l+1;
  }else{
    if(id == 0)
      cout<<2;
    else
    cout<<id+1;
  }
}

int main(){
  int t = 1;
  // cin>>t;
  while(t--){
    solve();
  }
}