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
        lli n , m , k ; 
        cin >> n >> m >> k ; 
        if(m<=n/k)
            cout<<m<<endl ; 


        else{
            if((m-n/k)%n==0)
                cout<<(m-n/k)-(m-n/k)/n <<endl; 

            else 
                cout<<(m-n/k)-(m-n/k)/n+1 <<endl ;
        }
    }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>