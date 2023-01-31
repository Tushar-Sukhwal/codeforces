#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n ; 

    vector<vector<char>> arr (n,(vector<char>(n,'0')));

    for(int i = 0 ; i < n ; i++){
        arr[0][i]='*';
        arr[i][0]='*';
        arr[n-1][i]='*';
        arr[i][n-1]='*';

    }
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            if(arr[i][j]=='0'){
                cout<<" ";
            }
            else
                cout<<arr[i][j];
        }
        cout<<endl<<endl; 
    }



return 0;
}