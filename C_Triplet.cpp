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
#define vi vector<int> 
// const ll mod = 1000000007;
// const ll mod = 998244353;

void Solve (vi &primes, vi &hash) {
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 0; i<primes.size(); i++){
        for(int j = i; i<primes.size(); j++){
            if(primes[i] + primes[j] >= n)break;
            int comp = n - primes[i] - primes[j];
            if(hash[comp] && comp >= primes[j]){
                ans++;
            }
        }
    }
    cout<<ans<< "\n";
}

vi sieveOfEratosthenes(int n) {
    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    vi v;
    for (int p = 2; p <= n; p++) {
        if (prime[p])
            v.push_back(p);
    }
    return v;
}

int32_t main(){
    ios::sync_with_stdio(false), cin.tie(NULL);
    // cout << fixed << setprecision(0);
    vi primes = sieveOfEratosthenes(50005);
    vi hash (5 * 1e5 + 5);
    for (auto it : primes) {
        hash[it] = 1;
    }
    Solve(primes,hash);
    return 0;
}