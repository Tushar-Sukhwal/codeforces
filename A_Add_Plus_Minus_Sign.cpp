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
            lli n , ones = 0 , zeros = 0 ; 
            cin >> n ; 
            vector<lli> arr(n) ; 
            for(int i = 0 ; i<n ; i++){
                cin >> arr[i] ; 
                if(arr[i]==0)
                    zeros++ ; 
                
                else 
                    ones++ ; 
                    
            }
            if(ones%2==0){
                if(arr[0]==0){
                    int plues = ones/2 ; 
                    int i = 1 ; 
                    for(int i = 0 ; i<n ; i++){
                        if(plues >0 && arr[i]==1){
                            cout<<"+" ; 
                            plues-- ; 
                        }
                        else if(arr[i]==0){
                            cout<<"+"; 
                        }
                        else 
                            cout<<"-"; 
                    }
                }
                else{
                    int plues = zeros/2 -1 ; 
                    int i = 1 ; 
                    for(int i = 1 ; i<n ; i++){
                        if(plues >0 && arr[i]==1){
                            cout<<"+" ; 
                            plues-- ; 
                        }
                        else if(arr[i]==0){
                            cout<<"+"; 
                        }
                        else 
                            cout<<"-"; 
                    }
                }
            }
            else{
                if(arr[0]==0){
                    int pluses = ones/2+1 ;  
                    int i = 0 ; 
                    for(int i = 1 ; i<n ; i++){
                        if(pluses>0 && arr[i]==1){
                            cout<<"+"; 
                            pluses--; 
                        }
                        else if (arr[i]==0)
                            cout<<"+"; 

                        else{
                            cout<<"-"; 
                        }
                    }

                }
                else{
                    int pluses = ones/2 ; 
                     

                        for(int i = 1 ; i<n ; i++){
                            if(pluses>0 && arr[i]==1){
                                cout<<"+"; 
                                pluses--; 
                            }
                            else if (arr[i]==0)
                                cout<<"+"; 

                            else{
                                cout<<"-"; 
                            }
                        }
                }
            }
            cout<<endl ; 
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>