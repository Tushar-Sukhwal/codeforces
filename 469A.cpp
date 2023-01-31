#include <bits/stdc++.h>
using namespace std;

int main(){

//hello 
int n , p , q ; 

cin >> n >> p ; 

vector<int> arr ; 
for(int i = 0 ; i<p; i++){
    int a ; 
    cin>>a ; 
    arr.push_back(a); 
}


cin >> q ; 

for(int i = 0 ; i<q ; i++){
    int a ; 
    cin>>a ; 
    arr.push_back(a);
}

int arr1[n] = {0} ; 

for(int i = 0 ; i<arr.size() ; i++){
    arr1[(arr[i]-1)] = 1 ; 
}
for(int i = 0 ; i<n ; i++){
    if(arr1[i]==0){
        cout<<"Oh, my keyboard!" ;
        return 0 ; 
    }
    
}

cout<<"I become the guy.";


return 0;
}


//CORRECT AND CLOSED 
