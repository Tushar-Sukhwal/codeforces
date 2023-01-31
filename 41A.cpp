#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1 , s2 ,s3; 
    cin>>s1>>s2 ; 
    int a = s1.size(); 

    for(int i = 0 ; i<a ; i++){

        s3.push_back(s1[a-i-1]);

    }
    if(s3==s2)
        cout<<"YES";

    else
        cout<<"NO";     


return 0;
}