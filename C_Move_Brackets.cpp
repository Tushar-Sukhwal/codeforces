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
            int a ; 
            cin >> a ; 
            string str ; 
            cin >> str ; 
            int counter = 0 ; 
            int flag = 1 ; 
            int min = INT_MAX ; 
            for(int i = 0 ; i<str.size() ; i++){
                if(str[i]=='(')
                    counter++; 

                else  
                    counter--; 

                if(counter<0){
                    flag = 0 ; 

                }

                if(counter<min)
                    min = counter ; 

            }
            cout<<abs(min)<<endl; 

        }

    return 0;



}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>