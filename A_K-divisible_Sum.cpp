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
            lli n , k ; 
            cin >> n >> k ; 
            if(k==n || k==1){
                cout<<"1"<<endl;
            }
            else if (k>n){
                int i = 0 ; 
                // while(i*n<k){
                //     i++;
                // }

                if(k%n==0)
                    i = k/n ; 

                else
                    i = k/n + 1; 


                if(i*n==k)
                    cout<<i<<endl;
                else
                    cout<<i<<endl;
            }
            else {
                int i = 0 ; 
                // while(n>i*k)
                //     i++;

                if(n%k==0)
                    i = n/k ; 

                else 
                    i = n/k + 1 ; 

                if(i*k==n)
                    cout<<"1"<<endl; 

                else 
                    cout<<"2"<<endl;
            }





        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>