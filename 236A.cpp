#include<iostream>
#include<string>
using namespace std;


int main(){
string str; 
cin>>str; 

int arr[26]= {0}; 

for(int i =0 ; i<str.size() ; i++){

    arr[str[i]-97]++; 

}
int counter ; 

for(int i = 0 ; i<26 ; i++){

    if(arr[i]>0)
        counter++;
}
if(counter%2)
    cout<<"IGNORE HIM!";

else
    cout<<"CHAT WITH HER!";




return 0;
}