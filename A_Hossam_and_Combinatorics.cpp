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
            lli a ; 
            cin >> a ; 
            vector<int> arr(a); 
            for(int i = 0 ; i<a ; i++){
                        cin >> arr[i]; 
                    }

            if(a==2){
                cout<<"2"<<endl;
            }


            else
            {           
                    sort(arr.begin(), arr.end()); 
                    
                    int i = 1 , counter = 1  ; 
                    while(arr[i]==arr[0]){
                        counter++;
                        i++;
                    }
                    int j = arr.size()-2 , counter1 = 1 ; 

                    while(arr[j]==arr[arr.size()-1]){
                        counter1++;
                        j--;
                    }
                    if(arr[0]==arr[arr.size()-1]){
                    cout<<counter1*counter*2 -1<<endl;
                    }
                    else
                    cout<<counter1*counter*2<<endl;
            }
        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>