#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; 
    cin >> n ; 
    for(int i = 0 ; i<n ; i++){
        int a ; 
        cin >> a ; 
        vector<int> arr ; 
        for(int j = 0 ; j<a ; j++){
            int b ; 
            cin >> b ; 
            arr.push_back(b); 
        }
        sort(arr.begin(), arr.end());

        for(int j = 0 ; j<a-1; j++){
            if(abs(arr[j]-arr[j+1])<=1){
                arr[j]=0;
            }
        }
        int counter = 0 ; 
        for(int j = 0 ; j<a ; j++){
            if(arr[j]!=0)
                counter++;
        }
        if(counter==1)
            cout<<"YES";

        else
            cout<<"NO";

        cout<<endl;

    }



return 0;
}