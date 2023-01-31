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
            int zero = 0 , one = 0 ; 
            string str; 
            cin >> str ; 
            for(int i = 0 ; i<str.size() ; i++){
                if(str[i]=='0')
                    zero++;
                else
                    one++;
            }
            if(min(zero,one)%2==0)
                cout<<"NET"<<endl;

            else    
                cout<<"DA"<<endl;
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>