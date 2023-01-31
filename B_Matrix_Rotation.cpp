//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)

void printarr(vector<vector<int>> arr){
                cout<<endl; 
                for(int i = 0 ; i<2; i++){
                    for(int j = 0 ; j<2 ; j++)
                        cout<<arr[i][j]<<" "; 
                    cout<<endl;
                }
}
void rotate(vector<vector<int>>& a){
    swap(a[0][0], a[0][1]) ; 
    // printarr(a); 
    swap(a[0][0],a[1][0]); 
    // printarr(a); 
    swap(a[1][0],a[1][1]) ; 
    // printarr(a); 
    // cout<<"done"<<endl;
}

bool beautiful (vector<vector<int>> arr){
    if(arr[0][0]<arr[0][1] && arr[0][0]<arr[1][0] && arr[1][0]<arr[1][1] && arr[0][1]<arr[1][1])
        return true ; 

    else 
        return false ; 
}   





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            vector<vector<int>> arr (2,vector<int>(2));
            for(int i = 0 ; i<2 ; i++){
                for(int j = 0 ; j<2 ; j++){
                    int a ; 
                    cin >> a ; 
                    arr[i][j]=a ; 
                }
                    
            }
/*             for(int i = 0 ; i<2; i++){
                for(int j = 0 ; j<2 ; j++)
                    cout<<arr[i][j]; 
            } */
            int flag = 0 ; 
            for(int i = 0 ; i<4 ; i++){
                if(beautiful(arr)){
                    yes 
                    flag = 1 ;
                    break ; 
                }
                rotate(arr) ;

            } 
            if(flag == 0 )
                no 




        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>