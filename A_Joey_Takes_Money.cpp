//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            lli n, pro=1; cin >> n ; 
            vector<int> arr(n) ; 
            for(int i = 0 ;i<n ; i++) cin >> arr[i] ; 
            for(int i = 0 ; i<n ; i++) pro = (pro)*arr[i]; 
            cout<<(pro+n-1)*2022<<endl; 
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>