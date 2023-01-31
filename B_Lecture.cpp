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
        lli n , m ; 
        cin >> n >> m ; 
        vector<string> first (m); 
        vector<string> ans  ; 
        for(int i = 0 ; i<m ; i++){
            cin >>first[i] ; 
            string str ; 
            cin >> str ; 
            if(first[i].size()<=str.size())
                ans.push_back(first[i]);

            else 
                ans.push_back(str) ; 
        }


        for(int i = 0 ; i<n ; i++){
            string str ; 
            cin >> str ; 
            int j = 0 ; 
            while(str!=first[j]){
                j++;
            }
            cout<<ans[j]<<" ";

        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>