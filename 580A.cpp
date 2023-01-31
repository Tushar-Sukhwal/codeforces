
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int maxi=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
        }
        else {
            
            count=0;
        }
        maxi=max(count,maxi);
    }
    // maxi=max(count,maxi);
 
    cout<<maxi+1<<endl;
    return 0;
}



//correct and closed 
