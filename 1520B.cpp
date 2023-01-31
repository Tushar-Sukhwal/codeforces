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
            int n ; 
            cin >> n ; 
            int counter = 0 ; 
            for(int i = 1 ; i<=n ; i++){
                int temp ; 
                int flag =1 ;  
                int num = i ;
                temp = num%10;
                num = num/10;
                while(num){
                    if(temp!=num%10){
                        flag = 0 ; 
                        break ; 
                    }
                    num = num/10;
                }
                if(flag ==0){

                }
                else{
                    counter++;
                }

                
            }
                cout<<counter<<endl; 

        }

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>