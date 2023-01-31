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
        lli n , k ; cin >> n >> k ;
        vector<int> arr(n) ; 
        for(int i = 0 ;i<n ;i++){
            cin >> arr[i] ; 
        }
        vector<int> perm(n) ; 
        for(int i = 0 ;i<n ;i++){
            perm[i]=i+1 ; 

        }
        int counter = 0 ; 
        int j = 0 ; 
        for(int i =0 ;i<n ;i++){
            if(arr[i]==perm[j]){
                j++; 
                counter++ ;

            }
        }
        // cout<<counter ; 
        int ans = n-counter ; 

        if(ans==0) cout<<0<<endl; 
        else if(ans<=k) cout<<1<<endl; 

        else if(ans%k==0) cout<<ans/k<<endl; 
        else cout<<ans/k +1 <<endl;


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


