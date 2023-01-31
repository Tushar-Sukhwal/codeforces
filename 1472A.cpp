//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

int two(int n ){
    int counter = 0 ; 
    while(n%2==0){
        counter++; 
        n = n/2; 
    }
    return counter ; 
}

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            int w , h , n ; 
            cin >> w >> h >> n ; 

            int ans = pow(2,two(w)+two(h)); 
    
            if(ans>=n)
                yes
            else
                no 



        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>