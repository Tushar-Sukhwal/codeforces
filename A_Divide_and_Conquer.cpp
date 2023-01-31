//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

bool isEven (int a ) {
    if(a%2==0)
        return true ; 

    else 
        return false ; 
}

int stepsToConvertToEven(int a ){
    int counter = 0 ; 
    
    while(a%2!=0){
        counter++; 
        a = a/2 ; 
        if(a==0){
            return counter ; 
        }
    }
    return counter ; 
}
int stepsToConvertToOdd(int a){
    int counter = 0 ; 

    while(a%2==0){
        counter++; 
        a = a/2 ; 
        if(a==0)
            return INT_MAX ; 

    }
    return counter ; 
    
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

        int n ;
        cin >> n ;
        vector<int> arr , even; 
        for(int i = 0 ; i<n ; i++){
            int a ; 
            cin >> a ; 
            if(isEven(a)==0)
                arr.push_back(a) ;

            else 
                even.push_back(a) ; 
        }
        int min = INT_MAX ; 

        if(arr.size()%2==0 || arr.size()==0)
            cout<<"0"<<endl;


        else{
            for(int i = 0 ; i<arr.size() ; i++){
                if(stepsToConvertToEven(arr[i])<min)
                        min = stepsToConvertToEven(arr[i]) ; 
            }
            for(int i = 0 ; i<even.size() ; i++){
                if(stepsToConvertToOdd(even[i])<min){
                    min = stepsToConvertToOdd(even[i]) ;
                }
            }
            
            cout<<min <<endl ;
        }


    }

    return 0;
}
