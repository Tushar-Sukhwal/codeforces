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
        lli n ;
        cin >> n ; 
        vector<int> arr ; 
        lli temp = n ; 
        while(temp!=0){
            lli a ; 
            a = temp%10; 
            arr.push_back(a); 
            temp = temp/10 ; 
        }


        if(n>=0)
            cout<<n; 

        else if(n<0 && n>=-10)
            cout<<"0"; 


        else{
            if(n%10==0 && abs(n)<100){

            }
            else{
                cout<<"-";
            }

            if(abs(arr[0])>abs(arr[1])){
                for(lli i = arr.size()-1  ; i>=1; i-- ){
                    cout<<abs(arr[i]);
                }
            }
            else{
                for(lli i = arr.size()-1 ; i>=0 ; i--){
                    if(i==1)
                        continue  ; 

                    else
                        cout<<abs(arr[i]);
                }
            }
        }

        
        


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>