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
        vector<lli> arr (m); 
        for(lli i = 0 ; i<m ; i++){
            cin >> arr[i] ; 
        }
        lli currpos = 1 ; 
        lli counter = 0 ; 

        for(lli i = 0 ; i < m ; i++){

            if(arr[i]>currpos){
                counter += (arr[i]-currpos);
            }

            else if(arr[i]<currpos){
                counter += (n-currpos+arr[i]);
            }
            currpos = arr[i] ; 


        }
        cout<<counter ; 



    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>