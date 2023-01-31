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
        lli n ; cin >> n ; 
        if(n%2==0) {
            yes 
            for(int i = 0 ; i<n/2 ; i++){
                cout<<-1<<" "<<1<<" " ;
            }
            cout<<endl ;
        }
        else if (n==3) no 
        else {
            int tushar = n/2 ; 
            yes
            cout<<-(tushar-1)<<" ";
            for(int i = 0 ;i<tushar ; i++){
                cout<<tushar<<" "<<-(tushar-1)<<" "; 
            }
            cout<<endl; 
        }
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


