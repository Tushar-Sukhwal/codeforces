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
            int n , m ; 
            cin >> n >> m ; 

            if(n%2==0)
                cout<<n/2*m<<endl;

            else if (m%2==0)
                cout<<m/2*n<<endl; 

            else
                cout<<((m*n)/2)+1<<endl; 
            
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>