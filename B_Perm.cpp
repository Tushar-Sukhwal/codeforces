//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli Tushars_07 ; cin>>Tushars_07; while(Tushars_07--)
#define vi vector<int> 
#define fi for(int i = 0 ; i<n ; i++) 
#define fj for(int i = 0 ; i<n ; i++) 
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ub  upper_bound // '>'      
#define lb  lower_bound // '>='


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test{
        lli x , s ; cin >> x >> s ; 
        vi arr(x) ; 
        for(int i = 0 ;i<x ;i++)  cin >> arr[i] ; 

        vi rem ; 
        int a ,max = INT_MIN; 
        for(int i = 0 ;i<arr.size() ; i++){
            if(arr[i]>max)
                max = arr[i] ; 
        }
        a = max ; 
        lli sum = 0 ; 
        for(int i = 0 ; i<arr.size() ; i++){
            sum += arr[i] ; 
        }
        
        lli sum2 = (a*(a+1))/2; 
        // cout<<sum<<" "<<sum2<<" "<<s; 
        if(sum2-sum == s ) yes 
        else no 
    }

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>


///////////////////         ///////////  //      //        //\       //////////
        //                  //           //      //       //  \      //      //  
        //    //      //   //            //      //      //   \      //      //  
        //    //      //   ///////////   //////////     //     \     //////////
        //    //      //            //   //      //    //=======\    ////
        //    //      //            //   //      //   //         \   //  //
        //    //////////   ///////////   //      //  //            \ //    // 


