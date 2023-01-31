//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)

void printarr(vector<pair<int,int>> arr){
    for(int i = 0 ; i<arr.size() ; i++){
        cout<<arr[i].first <<" "<<arr[i].second<<endl ;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test{
        lli n , k ; 
        cin >> n >> k ; 
        vector<int> a (n) ,b(n); 
        for(int i = 0 ; i<n ; i++){
            cin >> a[i] ; 
        }
        for(int i = 0 ; i<n ;i++){
            cin >> b[i] ; 
        }

        vector<pair<int,int>> arr ; 
        for(int i = 0 ; i<n ;i++){
            pair<int,int> p ; 
            p = make_pair(a[i],b[i]) ; 
            arr.push_back(p) ; 
        }
        sort(arr.begin(),arr.end()) ; 

        // printarr(arr) ; 
        int i = 0 ; 
        while(i<n && arr[i].first<=k){
            k+=arr[i].second;
            i++;
            // cout<<k<<endl; 
        }
        cout<<k<<endl; 





    }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>