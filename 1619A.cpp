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
            int i = 0 ; 
            int counter = 0 ; 
            string str ; 
            cin >> str ; 
            if(str.size()%2==1)
                no 
            
            else{
                while(i<str.size()/2){
                    if(str[i]==str[i+str.size()/2]){
                        counter++; 
                    }
                    else{
                        no 
                        break ; 
                    }
                    i++;
                } 
            }
            if( str.size()%2==0  && counter==str.size()/2)
                yes 
        }



    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>