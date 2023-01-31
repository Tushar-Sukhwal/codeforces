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
        lli n , l ; 
        cin >> n >> l ; 
        deque<int> location (n) ; 
        for(int i = 0 ; i<n ; i++)
            cin >> location[i] ; 

        sort(location.begin(),location.end());
        
        int lastDist = l-location[n-1] ;
        int maxi = INT_MIN ; 
        int hello = max(location[0],lastDist);
        



        for(int i = 0 ; i<n-1  ; i++){
            int diff ; 
            diff = location[i+1]-location[i] ;
            if(diff>maxi)
                maxi = diff ; 
        }


        cout<<setprecision(20);
          
        if(2*hello>maxi){
            cout<<(long double)hello;
        }
        else {
           cout<<(long double)maxi/2;
        }





    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>