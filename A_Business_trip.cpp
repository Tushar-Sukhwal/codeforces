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
        lli n , total = 0 , counter = 0 ; 
        vector<int> arr (12,0); 
        cin >> n ; 
        for(int i = 0 ; i<12 ; i++){
            cin >> arr[i];
            total += arr[i];
        }
        sort(arr.begin() , arr.end()); 

        lli i = 0 ; 
        while(total>=n ){
            total -= arr[i];
            i++;
            counter++;
        }

        if(12-counter+1<=12)
        cout<<12-counter+1 ; 

        else 
            cout<<"-1";


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>