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
        vector<int> arr ; 
        for(int i = 0 ; i<4 ; i++){
            int a ; 
            cin >> a ; 
            arr.push_back(a);
        }
        string str ; 
        cin>>str ; 
        int counter = 0 ; 
        for(int i = 0 ;i<str.size(); i++){
            counter += arr[str[i]-49];
        }   
        cout<<counter ; 


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>