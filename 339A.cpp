#include <bits/stdc++.h>
using namespace std;




int main(){

string str ; 
cin>>str; 

vector<int> arr; 

for(int i = 0 ; i< str.size() ; i = i +2 ){

    arr.push_back(str[i]-48); 

}

sort(arr.begin() , arr.end()); 


for(int i = 0 ; i<arr.size() ; i++){

    cout<<arr[i];
    if(i!=arr.size()-1)
        cout<<'+'; 
}





return 0;
}