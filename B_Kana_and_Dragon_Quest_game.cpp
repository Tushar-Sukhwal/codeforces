//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

int absorption(int n ){
    return (n/2)+10 ; 
}





#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            int initial , maxVoid , maxLight ; 
            cin >> initial >> maxVoid >> maxLight ; 

            while(maxVoid>0){
                if(absorption(initial)<initial){
                    initial = absorption(initial); 
                }
                else 
                    break ; 

                maxVoid--;
            }

            if( initial- maxLight*10 <= 0){
                yes
            }
            else 
                no 




        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>