#include <bits/stdc++.h>
using namespace std;

int main(){

    string str , str1 , str2 = "hello"; 
    cin >> str ; 


    for(int i= 0 ; i<str.size()-1 ; i++){
        if(str[i]==str[i+1]){

        }
        else{
            str1.push_back(str[i]); 
        }
    }
    cout<<str1; 
    int i = 0 ; 
    int j = 4; 
    while(j<str.size()){
        int counter = 0 ;
        for(int k = i ; k<= j ; k++){
            if(str2[i]==str1[i]){
                counter++; 
            }

            else
                break ;
        }
        if(counter == 5){
            cout<<"YES";
            return 0 ;  
        }
        j++;
        i++;
    }
    cout<<"NO";


return 0;
}