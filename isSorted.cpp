//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)

bool isSorted(vector<int>::iterator arr ,int n  ){
    if(n==0||n==1)
        return true ; 

    if(arr[0]>arr[1])
        return false ;

    return isSorted(arr+1,n-1) ; 
        

}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n ; cin >> n ; 
    vector<int> arr (n) ; 
    for(int i = 0 ; i<n ;i++){
        cin >> arr[i]  ; 
    }

    auto it = arr.begin() ; 
    if(isSorted(it,n))
        yes 

    else no 


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>