#include<bits/stdc++.h>
#define lli long long int
#define ll long long
#define in int t ; cin>>t ;
#define test for(int i=1;i<=t;i++)
#define li for(int i=0;i<n;i++)
#define lj for(int j=0;j<n;j++)
using namespace std;
 

 
lli fac(lli n){
    lli fact = 1;
    for(lli i=1;i<=n;i++){
        fact *= i;
    }
 
    return fact;
}
 
 
int main(){
 
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
    lli a,b;
 
    cin>>a>>b;
 
    lli ans = fac(min(a,b));
 
    cout<<ans;
 
 
  return 0;
}