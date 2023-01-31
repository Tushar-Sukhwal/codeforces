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
            int n ; 
            cin >> n ; 
            vector<int> arr ; 
            for(int i = 0 ; i<n ; i++){
                int a ; 
                cin >> a ; 
                arr.push_back(a);
            }
            sort(arr.begin(),arr.end());
            cout<<arr[arr.size()-1]-arr[0]<<endl;
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>