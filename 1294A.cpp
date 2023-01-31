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
            vector<int> arr(3,0); 
            int a ; 
            for(int i = 0 ; i<3 ; i++){
                cin>>arr[i];
            }
            cin >> a ; 
            sort(arr.begin(),arr.end()); 

            int temp = abs(arr[2]-arr[0])+abs(arr[2]-arr[1]); 


            if(a>temp){
                if((a-temp)%3==0)
                    yes
                else
                    no
            }
            else if(a==temp)
                yes

            else
                no

        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>