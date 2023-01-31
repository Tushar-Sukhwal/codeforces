//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)


void binary (vector<vector<int>>& ans  , vector<int> arr ,  int index  ){
    while(arr[index]){
        int digit = arr[index]%2 ;
        ans[index].push_back(digit) ; 
        arr[index] = arr[index]/2 ; 
    }
}

void print2d(vector<vector<int>> ans , int n ){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<ans[i].size() ; j++){
            cout<<ans[i][j]<< " " ; 
        }
        cout<<endl ;
    }
}

bool checkmax(vector<vector<int>> ans){
    for(int i = 0 ; i< ans[ans.size()-1].size() ; i++){
        if(ans[ans.size()-1][i]==1)
            continue ; 

        else 
            return false ; 
    }
    return true ; 
}

bool checkmin(vector<vector<int>> ans){
    for(int i = 0 ; i< ans[0].size() ; i++){
        if(ans[0][i]==0)
            continue ; 

        else 
            return false ; 
    }
    return true ; 
}

int  finalans (vector<vector<int>> ans){
    int max = 0 , min = 0 ; 

    for(int i = 0 ; i<ans[0].size() ; i++){
        min = ans[0][i]*pow(2,i); 
    }
    for(int i = 0 ; i<ans[ans.size()-1].size() ; i++){
        min = ans[ans.size()-1][i]*pow(2,i); 
    }

    return max-min ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            int n ; 
            cin >> n ; 
            vector<int> arr ; 
            for(int i = 0 ; i<n ; i++){
                cin >> arr[i] ; 
            }

            sort(arr.begin(), arr.end()) ; 

            vector<vector<int>> ans (n); 
            
            for(int i = 0 ; i<n ; i++){
                binary(ans , arr , i ) ; 
            }

            int flagmax = 0 , flagmin = 0 ; 

            for(int i = 0 ; i<n-1 ; i++){
                for(int j = 0 ; j<min(ans[i].size() , ans[n-1].size()) ; j++){
                    if(ans[n-1][j]==0 && ans[i][j]==1)
                        swap(ans[n-1][j],ans[i][j]);
                }
                if(checkmax(ans)){  
                    flagmax = 1; 
                    break ; 
                }
            }

            for(int i = 1 ; i<n ; i++){
                for(int j = 0 ; j<min(ans[i].size() , ans[0].size()) ; j++){
                    if(ans[i][j]==0 && ans[0][j]==1)
                        swap(ans[i][j],ans[0][j]);
                }
                if(checkmin(ans)){  
                    flagmin = 1; 
                    break ; 
                }
            }

            cout<<finalans(ans)<<endl ;
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>