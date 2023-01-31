//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

bool yess(string str ){
    if(str[0]=='Y' || str[0]=='y'){
        if(str[1]=='e' || str[1] == 'E' ){
            if(str[2] == 's' || str[2] == 'S'){
                return true ; 
            }
        }
    }
    return false ; 
}


#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        
        test {
            string str ; 
            cin >> str ; 
            if(yess(str))
                yes

            else
                no 
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>