#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ; 
    cin >> t ; 
    for(int i = 0 ; i<t ; i++){
        int n ; 
        cin >> n ; 
        vector<int> arr ; 
        for(int j = 1 ; arr.size()<n ; j++){
            if(j%3==0 || j%10==3){
                continue ; 
            }
            else{
                arr.push_back(j);
            }

        }
        cout<<arr[n-1]<<endl;
    }


return 0;
}