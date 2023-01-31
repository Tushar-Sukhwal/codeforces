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
        vector<int> arr (n) ; 
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i] ;
        }
        int even = 0 ; 
        int odd = 0 ; 
        for(int i = 0 ; i<n ;i++){
            arr[i] = arr[i]%2 ;

            if(arr[i]==0) even++; 

            else odd++;
        }
        if(even>odd) {
            for(int i = 0 ; i<n ; i++){
                if(arr[i]==1)
                    cout<<i+1; 
            }
        }
        else{
            for(int i = 0 ; i<n ;i++)
                if(arr[i]==0)
                    cout<<i+1 ; 
        }
        
        
        



    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>