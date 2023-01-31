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
        int n ;
        cin >> n ; 
        vector<int> arr(n) ; 
        int arr1[5]={0};
        for(int i = 0 ; i<n ; i++){
            cin >> arr[i];
            arr1[arr[i]]++;
        }
        int vacant = arr1[3]; 
        int taxis = 0 ; 
        taxis += arr1[4] + arr1[3];
        
        if(arr1[2]%2==0){
            taxis += arr1[2]/2; 

        }
        else {
            taxis += arr1[2]/2 + 1 ; 
            vacant += 2 ; 
        }
        
        if(vacant>=arr1[1]){

        }

        else{
            if((arr1[1]-vacant)%4 == 0){
                taxis += (arr1[1]-vacant)/4;
            }
            else{
                taxis += (arr1[1]-vacant)/4 +1 ; 
            }
        }

        cout<<taxis; 

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>