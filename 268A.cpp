#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> arr;
int n ;
int count = 0 ; 
cin>>n;
for(int i = 0 ; i< 2*n ; i++){
    int a ;
    cin>>a;
    arr.push_back(a);
}
//i is home 
for(int i = 0 ; i< 2*n-1 ; i = i+2){
    //j is guest 
    for(int j = 1 ; j<2*n ; j = j+2){
        if(i+1 == j ){
            continue ; 
        }
        else if (arr[i]==arr[j]){
            count++;
        }
    }
}
  

cout<<count;

return 0;
}

//correct and closed 