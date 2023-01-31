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
    test{
        lli a , b , p , q ; 
        cin >> a >> b >> p >> q ; 

        int first , second ; 

        first = b*(max((p),(a-p-1))); 
        second = a*(max(q,(b-q-1))) ; 

        cout<<max(first,second)<<endl;
    }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>