#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    cin >> n ;
    vector<vector<int>> arr(2*n-1,vector<int>(2*n-1,0)) ; 
    int k = 1 ; 
    for(int i = 0 ; i<2*n-1 ; i++ ){
        int rm = 2*n-1-i;

        //ok
        for(int j =  i; j<rm ; j++){
            arr[i][j]=k; 
        }
        //ok
        for(int j = i ; j<rm ; j++){
            arr[j][i]=k; 
        }

        for(int j = rm-1 ; j>=i ; j--){
            arr[j][rm-1]=k;
        }
        for(int j = rm-1 ; j>=i ; j--){
            arr[rm-1][j] =k;
        }        
        k++;
    }
    for(int i = 0 ; i<2*n-1 ; i++){
        for(int j = 0 ; j<2*n-1 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    




return 0;
}



