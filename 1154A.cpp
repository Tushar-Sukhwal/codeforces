#include<iostream>
#include<climits>
using namespace std;

int getGreatest (int a , int b, int c , int d ){
    int temp ;
    temp  = max(a,b);
    temp = max(temp,c);
    temp = max(temp,d);
    return temp ;
}



int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;

int ans = getGreatest(a,b,c,d);

if(ans-a != 0){
    cout<<ans-a<<" ";
}
if(ans-b != 0){
    cout<<ans-b<<" ";
}
if(ans-c != 0){
    cout<<ans-c<<" ";
}
if(ans-d != 0){
    cout<<ans-d<<" ";
}




return 0;
}