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
            int a , b ; 
            cin >> a >> b ; 
            vector<int> arr1 , arr2  ; 
            for(int i = 0 ; i<a ; i++){
                int n ; 
                cin >> n ;
                arr1.push_back(n);
            }
            for(int i = 0 ; i<a ; i++){
                int n ; 
                cin >> n ; 
                arr2.push_back(n); 
            }
            int n = 0 ; 
            int loop = 0 ;
            int l = arr1.size()-1 ; 
            sort(arr1.begin(),arr1.end());
            sort(arr2.begin(),arr2.end());
            while(loop<b){
                if(arr1[n]<arr2[l]){
                    swap(arr1[n],arr2[l]);
                    n++;
                    l--;
                    loop++;
                }
                else{
                    l--;
                }
            }
            int sum = 0 ;
            for(int i = 0 ; i<arr1.size() ; i++){
                sum = sum + arr1[i];
            }
            cout<<sum ; 







        }

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>