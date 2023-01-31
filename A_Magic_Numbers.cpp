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
        int i = 0 ; 
        while(i<str.size()){
            if(str[i]=='1'){
                if(str[i+1]=='4' && i+1<str.size()){
                    if(str[i+2]=='4' && i+2<str.size()){
                        i = i+3; 
                    }
                    else 
                        i = i+2; 
                }
                else 
                    i = i+1 ; 
            }
            else{
                no 
                return 0 ; 
            }


        }
        yes


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>