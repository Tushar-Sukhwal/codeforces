#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<unsigned long long int> arr; 
int n ;
cin>>n; 
for(int i = 0 ; i<n ; i++){
    unsigned long long int a ;
    cin>>a;
    arr.push_back(a);
}




for(int i = 0 ; i<n; i++){
    if(arr[i]==1 || arr[i]==2 ){
        cout<<"0"<<endl;
    }
    else if (arr[i]%2 == 0 ){
        cout<<((arr[i]/2)-1)<<endl;
    }
    else{
        cout<<(arr[i]/2)<<endl;
    }
}


return 0;
}


//completed and closed 
