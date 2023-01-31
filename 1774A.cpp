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
            int n ,i=0; 
            cin >> n ;
            string str ; 
            cin >> str ; 
            int counter = 1  ;
            if(str[0]=='1') counter++ ; 
            for( i = 1 ; i<n ; i++){

                if(str[i]=='1'){
                    if(counter%2==1)
                        cout<<"-";
                    else 
                    cout<<"+";

                    counter++ ; 
                }
                else cout<<"+";
            }   
            cout<<endl;
        }

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>