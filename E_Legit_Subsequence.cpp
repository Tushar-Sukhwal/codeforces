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
        vector<int> arr (n) ; 
        for(int i = 0 ; i<n ;i++)
            cin>> arr[i] ;
        

        int flag = 0 ; 
        for (int i = 0; i < n; i++){
            for(int j = i + 2; j < n; j++){
                if(arr[i] == arr[j])
                    flag = 1 ; 
            }
        }
        if(flag)
            yes
        else
            no
    }



    


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>