//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

bool func(vector<int> arr , int a , int b ){
    if(arr[3]==max(a,b)){
        if(arr[2]==min(a,b)){
            return true ; 
        }
    }
    return false ; 
}



#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            vector<int> arr; 
            for(int i = 0 ; i<4 ; i++){
                int a ; 
                cin >> a ; 
                arr.push_back(a); 
            }
            int a = max(arr[0],arr[1]);
            int b = max(arr[2],arr[3]);

            sort(arr.begin(),arr.end());

            if(func(arr,a,b))
                yes

            else
                no 
            
        }



    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>