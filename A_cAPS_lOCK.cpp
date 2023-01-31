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
        if(str[0]>='a' && str[0]<='z'){
            for(int i = 1 ; i<str.size() ; i++){
                if(str[i]>='A' && str[i]<='Z'){

                }
                else{
                    cout<<str; 
                    return 0 ; 
                }
            }
            str[0]=str[0]-32; 
            for(int i = 1 ; i<str.size() ; i++){
                str[i]=str[i]+32; 
            }
            cout<<str; 

        }
        else{
            for(int i = 0 ; i<str.size() ; i++){
                if(str[i]>='A' && str[i]<='Z'){

                }
                else{
                    cout<<str; 
                    return 0 ; 
                }
            }
            for(int i = 0 ;i<str.size() ; i++){
                str[i] = str[i]+32; 
                
            }
            cout<<str; 

        }



    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>