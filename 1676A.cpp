//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

bool lucky(string str ){
    if((str[0]+str[1]+str[2])==(str[3]+str[4]+str[5]))
        return true ;

    else
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
        test{
            string str; 
            cin >> str ; 

            if(lucky(str))
                yes 

            else
                no 
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>