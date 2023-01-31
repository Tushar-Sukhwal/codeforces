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
        lli n ;
        cin >> n ;
        unordered_map<string, int> m ;

        for(int i = 0 ; i< n ;i++){
            string str ; cin >> str ; 

            if(m[str]==0){
                cout<<"OK"<<endl; 
                m[str]++;
            }
            else {
                cout<<str<<m[str]<<endl ; 
                m[str]++;
            }
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>