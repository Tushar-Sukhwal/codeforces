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
            lli n ; 
            cin >> n ; 
            vector<int> arr (n-1) ; 
            int first ; 
            cin >> first ; 

            for(int i = 0 ; i<n-1 ; i++){
                cin >> arr[i] ; 
            }
            sort(arr.begin() , arr.end()) ; 

        for(int i = 0 ; i<n-1 ; i++){
            while(first<arr[i]){
                arr[i]-- ;
                first++; 
            }


        }
        cout<<first<<endl ; 

        
        }

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>