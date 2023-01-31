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

            if(a<=9)
                cout<<a<<endl;
            else if(a<=17)
                cout<<a-9<<"9"<<endl; 
            else if(a<=24)
                cout<<a-17<<"89"<<endl;
            else if(a<=30)
                cout<<a-24<<"789"<<endl;
            else if(a<=35)
                cout<<a-30<<"6789"<<endl;
            else if(a<=39)
                cout<<a-35<<"56789"<<endl;
            else if(a<=42)
                cout<<a-39<<"456789"<<endl;
            else if(a<=44)
                cout<<a-42<<"3456789"<<endl;
            else if(a==45)
                cout<<"123456789"<<endl;
            else 
                cout<<"-1"<<endl;
        }   


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>