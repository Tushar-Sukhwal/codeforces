#include<iostream>
using namespace std;

int main(){
int a ;
cin>>a;
int count = 0 ;
int temp = 0 ;

temp = a/5;
count = count +temp ;

a = a%5 ;

temp = a/4;
count = count +temp ;

a=a%4 ;

temp = a/3;
count = count +temp ;

a=a%3 ;

temp = a/2;
count = count +temp ;

a=a%2 ;

temp = a/1;
count = count +temp ;

a=a%1 ;

cout<<count ; 













return 0;
}