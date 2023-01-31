//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

string  mostFrequent(vector<string> arr, int n)
{


	// Find the max frequency using linear traversal
	int max_count = 1,  curr_count = 1;
    string res = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1])
			curr_count++;
		else
			curr_count = 1;
	
		if (curr_count > max_count) {
			max_count = curr_count;
			res = arr[i - 1];
		}
	}

	return res;
}





#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n ;
        cin >> n ; 
        vector<string> arr(n); 

        for(int i = 0 ; i<n ; i++){
            cin >> arr[i] ; 
        }
        vector<int> arr1(n,0) ; 

        sort(arr.begin(),arr.end()); 

        cout<<mostFrequent(arr,n);




    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>