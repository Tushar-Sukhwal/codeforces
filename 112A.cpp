#include<bits/stdc++.h>

using namespace std;

int compare(string str1 , string str2 ){
    for(int i = 0 ; i<str1.size(); i++ ){
        
        if(str1[i]==str2[i])
            continue; 
        
        else if(str1[i]>str2[i])
            return 1; 

        else if(str1[i]<str2[i])
            return -1; 
        

    }
    return 0 ; 
}



int main(){

    string str1; 
    string str2; 
    cin>>str1>> str2 ;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    cout<<compare(str1,str2);
    


return 0;
}