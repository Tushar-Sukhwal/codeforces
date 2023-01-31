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
            int n , x ; 
            cin >> n >> x ; 
        
            int counter = 0 ; 

            n = n-2 ; 
            counter++; 
            if(n>0){
                if(n%x==0)
                    cout<<counter+n/x<<endl;

                else{
                    cout << counter+n/x+1 << endl;
                }
            }     
            else
                cout<<"1"<<endl;
            
        }   

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>