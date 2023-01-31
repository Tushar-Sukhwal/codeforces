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

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int largestElement(vector<int> arr) {
    int max = arr[0] ;
    for(int i = 1 ; i < arr.size() ; i++) {
        if(max < arr[i]) {
            max = arr[i] ;
        }
    }
    return max ;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test{
        lli n ; cin >> n ; vi arr(n) ; fi cin >> arr[i] ; 

        int gccd = arr[0] ; 
        for(int i = 1 ; i<n ; i++){
            gccd = gcd(gccd,arr[i]) ; 
        }

        cout<<largestElement(arr)/gccd<<endl ;
        





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


