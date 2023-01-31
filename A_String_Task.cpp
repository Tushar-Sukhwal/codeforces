//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str ;
    cin >> str ; 
    for(int i = 0 ; i<str.size() ; i++){
        if(str[i]<='Z')
            str[i]=str[i]+'a'-'A';
    }
    for(int i = 0 ;i<str.size();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
            str[i]='/';
    }
    for(int i = 0 ;i<str.size() ; i++){
        if(str[i]!='/'){
            cout<<'.'<<str[i];
        }
    }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>