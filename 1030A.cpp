#include <bits/stdc++.h>
using namespace std;

int main(){

int n ; 
cin >> n ; 

int ans = 0 ; 
for(int i = 0 ; i<n ; i++){
    int a ; 
    cin>>a; 
    if(a!=0)
        ans++;
}

if(ans!=0)
    cout<<"HARD";

else
    cout<<"EASY";

return 0;
}

//correct and closed 