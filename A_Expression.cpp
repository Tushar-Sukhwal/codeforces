//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

int func(int a , int b , int c ){

    int max = INT_MIN ; 


    if(a*b*c > max){
        max = a*b*c ; 

    }
    if(a+b+c>max){
        max = a+b+c; 

    }
    if(a*(b+c)>max){
        max = a*(b+c); 

    }
    if((a+b)*c>max){
        max = (a+b)*c ; 

    }
    if(a*b+c > max){
        max = a*b+c ; 

    }
    if(a+b*c>max){
        max = a+b*c ; 

    }

    return max ; 



}



#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int a , b , c ; 
        cin >> a >> b >> c ; 

        cout<<func(a,b,c); 

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>


