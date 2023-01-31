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
        int a , b ,day = 1 ; 
        cin >> a >> b ; 
        while(a!=0){
            a--;
            if(day%b ==0){
                a++;
            }
            day++;
        }
        cout<<day-1; 


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>