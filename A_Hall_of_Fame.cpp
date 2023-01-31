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
        string str ; 
        int flag1 = 0 , flag2 = 0 ; 
        fi{
            char ch ; 
            cin >> ch ; 
            if(ch=='L') flag1 = 1 ; 
            if(ch=='R') flag2 =1  ; 
            str.pb(ch) ; 
        }
        if(flag1==0 || flag2==0) cout<<-1<<endl;
        else if(str[0]=='R' && str[n-1]=='L') cout<<0<<endl ; 

        else{
        int tushar = 0 ; 
        for(int i= 0 ; i<n-1 ; i++){
            if(str[i]=='R'){
                if(str[i+1]=='L'){
                    tushar = 1 ; 
                    break ;
                }
            }
        }

        if(tushar == 1 ) cout<<0<<endl; 
        else {
            for(int i = 0 ; i<n-1 ; i++){
                if(str[i]=='L'){
                    if(str[i+1]=='R'){
                        tushar = i ; 
                        break ; 
                    }
                }
            }
            cout<<tushar+1<<endl; 
        }
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


