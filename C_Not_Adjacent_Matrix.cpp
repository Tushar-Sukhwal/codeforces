//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)

void printarr(vector<int> arr , int n ){
    for(int i = 0 ; i<n*n ;i++){
        cout<<arr[i]<<" ";
        if((i+1)%n==0)
            cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    test{
        lli n ; 
        cin >> n ;

        if(n==1){
            cout<<"1"<<endl;
        }
        else if(n==2) {
            cout<<"-1"<<endl;
        }
        else {
        vector<int> arr (n*n) ; 

        int counter = 1 ; 

        for(int i = 0 ; i<n*n ; i = i+ 2 ){
            arr[i]=counter;
            counter++;
        }
        for(int i = 1 ; i<n*n ; i = i+2 ){
            arr[i]=counter ; 
            counter++ ; 
        }
        printarr(arr,n) ; 
        }




    }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
