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
            vector<int> arr (3); 
            for(int i = 0 ; i<3 ; i++){
                cin >> arr[i]; 
            }
            if(arr[1]*2 > arr[0]+arr[2]){
                if( ( arr[1]*2 - arr[2] ) % arr[0] == 0 ){
                    yes 
                }
                else if ((arr[1]*2 - arr[0])% arr[2] == 0){
                    yes
                }
                else 
                no 
            }
            else{
                if((arr[0]+arr[2])%(arr[1]*2) == 0 ){
                    yes
                }
                else 
                    no 
            }





        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>