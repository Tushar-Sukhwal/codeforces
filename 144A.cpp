#include <bits/stdc++.h>
using namespace std;

int main(){

int n ; 
cin>>n; 
vector<int> arr; 
for(int i = 0 ; i<n ; i++){
    int a ; 
    cin >> a ; 
    arr.push_back(a); 
}


//min from last and max from start ; 
int min = n-1 ;
int max = 0 ; 

for(int i = n-1 ; i>=0 ; i--){
    if(arr[i]<arr[min])
        min = i ; 
}
for(int i = 0 ; i<n ; i++){
    if(arr[i]>arr[max])
        max = i ; 
}
if(max>min){
    cout<<max+n-min-2 ; 
}
else 
    cout<<max+n-min-1 ;
return 0;
}


//correct and closed 
