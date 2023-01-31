//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)

void printset(set<lli> &arr){
    for(auto it : arr){
        cout<<it<<" "; 
    }
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        lli n = 1000000 ; 
        set<lli> ans ; 
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));
    
        for (lli p = 2; p * p <= n; p++) {

            if (prime[p] == true) {

                for (lli i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for (lli p = 2; p <= n; p++)
        if (prime[p])
            ans.insert(p*p) ; 
    test{
        lli a ; cin >> a; 

        // printset(ans) ; 
        auto it = ans.find(a) ; 

        
         if(it!=ans.end()) yes 

        else no 
    }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>