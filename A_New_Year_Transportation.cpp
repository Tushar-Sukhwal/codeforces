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
            int n , t ; 
            cin >> n >> t ;

            vector<int> arr (n) ; 

            for(int i = 1 ; i<n ; i++){
                cin >> arr[i] ;
            }

            int currpos = 1 ; 
            int i = 1 ; 









            while(currpos<n ){
                currpos += arr[currpos] ; 

                if(currpos==t || currpos==1){
                    yes 
                    return 0 ;
                }

            }
            no 
            




        return 0;
    }
    //<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>