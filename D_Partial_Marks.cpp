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
        string str ; 
        cin >> str ; 
        int n ; 
        cin >> n ; 
        vector<int> arr (26,0) ; 

        for(int i = 0 ; i<str.size() ; i++){
            arr[str[i]-'a']++; 
        }
        int counter = 0 ; 
        for(int i = 0 ; i<26 ;i++){
            if(arr[i]!=0)
                counter++;
        }
        if(n>str.size())
            cout<<"impossible";

        else if (counter >=n) cout<<0<<endl;
        else cout<<n-counter ; 


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>