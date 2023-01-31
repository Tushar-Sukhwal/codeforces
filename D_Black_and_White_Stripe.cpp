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
        string str ; cin >> str ; 

        int counter = 0 ; 
        for(int i = 0 ; i<k ; i++){
            if(str[i]=='W') counter++ ; 
        }
        int min = counter ;
        for(int i = 1  ;i<n -k +1 && n>1; i++){
            if(str[i-1]=='W') counter-- ; 
            if(str[i+k-1]=='W') counter++ ; 
            if(counter<min) min = counter ; 
        }


        cout<<min<<endl; 
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


