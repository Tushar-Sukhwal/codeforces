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
            string str ;
            vector<int> arr(26,0);
            cin >> str ;
            int i = 0 ; 
            arr[str[i]-65]++;
            while(i<str.size()-1){
                if(str[i]==str[i+1]){
                    i++;
                }
                else{
                    arr[str[i+1]-65]++;
                    i++;
                }
            }
/*             for(int i = 0 ; i<arr.size(); i++){
                cout<<arr[i]<<" ";
            }
 */
            int counter = 0 ; 
            for(int i = 0 ; i<arr.size() ; i++){
                if(arr[i]>=2){
                    no 
                    break ; 
                }
                else{
                    counter ++; 
                    continue ; 
                }
            }
            if(counter==26){
                yes
            }














        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>