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
        vector<int> arr(n,0); 
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i]; 
        }
        int counter = 0 ; 
        int j = 0 ; 
        sort(arr.begin(), arr.end());
        for(int i = 0 ; i<n && j<m; i++){
            if(arr[i]<0){
                counter += arr[i]; 
                j++;
            }
        }
        cout<<abs(counter) ; 



    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>