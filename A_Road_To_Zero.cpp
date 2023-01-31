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
            lli x , y , a , b ; 
            cin >> x >> y >> a >> b ; 

            if(b>2*a)
                cout<<(x+y)*a<<endl; 

            else 
                cout<<(min(x,y)*b)+(max(x,y)-min(x,y))*a <<endl;
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>