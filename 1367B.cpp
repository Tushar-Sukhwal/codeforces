#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; 
    cin >> t ; 
    for(int i = 0 ; i<t ; i++){

        int n ; 
        cin >> n ; 
        vector<int> arr; 

        for(int j = 0 ; j<n ; j++){
            int a ; 
            cin >> a ; 
            arr.push_back(a);
        }
        int counter = 0 ; 
        for(int j = 0 ; j<n; j++){
            if(j%2==arr[j]%2){
                continue ;
            }
            else{
                counter++;
            }
        }
        if(counter%2==1){
            cout<<"-1"<<endl ;
        }
        else{
            cout<<counter/2<<endl;
        }


    }


return 0;
}