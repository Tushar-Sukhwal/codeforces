//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

string  mostFrequent(vector<string> arr, int n)
{
    // code here
    int maxcount = 0;
    string  element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
 
    return element_having_max_freq;
}
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
        string str ; 
        cin >> str ; 
        vector < string > arr(n-1) ;

        for(int i = 0 ; i<n-1 ; i++){
            arr[i].push_back(str[i]);
            arr[i].push_back(str[i+1]); 
        }

        cout<<mostFrequent(arr , n-1); 

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>  