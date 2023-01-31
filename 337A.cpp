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
        
    int a , b ; 
    cin >> a >> b ; 
    vector <int> arr ,arr2 ; 
    for(int i = 0 ; i<b ; i++){
        int n ; 
        cin >> n ;
        arr.push_back(n); 
    }
    sort(arr.begin(),arr.end());
    int i = 0 ; 
    while(i+a-1<b){
        arr2.push_back(arr[i+a-1]-arr[i]);
        i++;
    }


    int min = INT_MAX; 
    for(int i = 0 ; i<arr2.size() ; i++){
        if(arr2[i]<min)
            min=arr2[i];
    }
    cout<<min; 





    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>