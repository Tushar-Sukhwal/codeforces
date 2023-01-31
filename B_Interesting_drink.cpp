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
        lli n ; 
        cin >> n ; 
        vector<int> shop (n) ; 
        for(int i = 0 ; i<n ; i++){
            cin >> shop[i] ;
        }
        lli q ; 
        cin >> q ; 
        sort(shop.begin(),shop.end());
        vector<int>::iterator lower ,upper; 
        
        for(int i = 0 ; i<q ; i++){ 
            lli a ; 
            cin >> a ; 
            if(a<shop[0]){
                cout<<"0"<<endl; 
                continue ; 
            }
            else if (a>=shop[n-1]){
                cout<<n<<endl; 
                continue ; 
            }
            
            lower = lower_bound(shop.begin(),shop.end(),a);

            // int ans = lower-shop.begin() ; 

            if(  shop[lower-shop.begin()]==a){
                upper = upper_bound(shop.begin(),shop.end(),a);
                cout<<upper-shop.begin()<<endl; 
            }


            else 
                cout<<lower-shop.begin()<<endl; 
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>