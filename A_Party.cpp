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
        int n ; 
        vector<int> arr(n+1,0) ; 
        cin >> n ; 


        for(int i = 0 ; i<n ; i++ ){
            int a ; 
            cin >> a; 
            if(a>0){
                arr[a]++;
            }
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>