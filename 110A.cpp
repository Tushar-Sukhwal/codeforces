
//!first try 
/* #include<iostream>
#include<vector>
using namespace std;
int main(){

    long long int n ; 
    cin >> n ; 

    vector<int> arr; 
    vector<int> arr1;
    
    while(n!=0){
        arr.push_back(n%10);
        n = n/10; 
        
    }
    int counter = 0 ; 
    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i]==4 || arr[i]==7)
            counter++; 
    }

    while(counter!=0){
        arr1.push_back(counter%10);
        counter = counter/10; 
    }

    int ans = 0; 
    for(int i = 0 ; i<arr1.size() ; i++){
        if(arr1[i]==4||arr[1]==7){
            continue;
        }
        else{
            ans++;
        }
    }

    if(ans!=0)
        cout<<"NO";
    
    else
        cout<<"YES";

return 0;
}
// */

#include<iostream>
#include<string>
using namespace std;

int main(){

string s ; 
cin>>s;

for(int i = 0 ; i<s.size() ; i++){
    
}


return 0;
}






