#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ;
    vector<vector<int>> arr (2*n,(vector<int>(2*n-1,0)));

    for(int i = 0 ; i<n ; i++){
        for(int j = i ; j<=(2*(n-1)-i) ; j++){
            arr[j][i]=1; 
        }
    }
    for(int i = 0 ; i<n ; i++){
        for(int j = i ; j<=(2*(n-1)-i) ; j++){
            arr[j][(2*n-i-1)]=1; 
        }
    }
    for(int i = 0 ; i<2*n-1; i++){
        for(int j = 0 ; j<2*n ; j++){
            if(arr[i][j]==0)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }

return 0;
}