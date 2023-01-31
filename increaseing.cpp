#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    

    for(int i = 0 ; i<n ; i++){
        int l ;
        cin >> l ; 
        vector<int> arr ; 
        
        for(int j = 0 ; j<l ; j++){
            int a ; 
            cin >> a ; 
            arr.push_back(a); 


        }
        for(int j = 0 ; j<l ; j++){
            for(int k = j+1 ; k<l ; k++){
                if(arr[j]==arr[k]){
                    cout<<"NO"<<endl;
                    break ; 
                }

                else{
                    cout<<"YES"<<endl; 
                    break ; 
                }

            }
        }
    }


return 0;
}