/*  //<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)


int lowestPower(vector<pair<int,int>> arr , int currIndex ){
    int min = INT_MAX  ; 

    for(int i = currIndex ; i<arr.size() ; i++){
        if(arr[i].second < min  ) 
            min = arr[i].second ; 
    }
    return min ; 
}





// void printarr(vector<pair<int,int>> arr){

//     for(int i = 0 ; i<arr.size()  ; i++){
//         cout<<arr[i].first << " " <<arr[i].second <<endl; 
//     }
// } 



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            int  n ;
            lli k ; 
            cin >> n >> k ; 
            vector<pair<int,int>> ans(n) ; 


            for(int i = 0 ; i<n ; i++){
                cin >>ans[i].first ;
            }
            for(int i = 0 ; i<n ; i++){
                cin >> ans[i].second ;
            }



            sort(ans.begin(),ans.end()); 

            lli damageSum = 0 ; 
            int currIndex = 0 ; 

            vector<pair<int,int>> :: iterator upper1 ; 

            // printarr(ans); 




            while(currIndex<n && k>0 ){
                    damageSum += k ;
                    while(ans[currIndex].first<=damageSum && currIndex<n)
                        currIndex++;
                    
                    pair<int,int> p = {damageSum+1,0} ; 
                    upper1 = upper_bound(ans.begin()+currIndex ,ans.end() , p) ;
                    currIndex  = upper1 - ans.begin()  ; 
                     


                    //  if(currIndex>n-1 && ans[n-1].first <=damageSum)
                    //      break ; 

                    k -= lowestPower(ans, currIndex) ; 

                }   
                if(currIndex>=n-1 && ans[ans.size()-1].first<=damageSum)
                    yes 

                else 
                    no 
         
            }
            
        


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>> 
 */


//! sort by power approach 

//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli trtyuio ; cin>>trtyuio; while(trtyuio--)

// void printarr(vector<pair<int,int>> arr ){
//     for(int i = 0 ; i<arr.size() ; i++){
//         cout<<arr[i].first << " " << arr[i].second <<endl ; 
//     }
// }

// Driver function to sort the vector elements
// by second element of pairs
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        test{
            int n , k ; 
            cin >> n >> k ; 
            vector<pair<int,int>> ans (n) ; 
            for(int i = 0 ; i<n ; i++){
                cin >> ans[i].first ; 
            }
            for(int i = 0 ; i<n ; i++){
                cin >> ans[i].second ; 
            }
            sort(ans.begin(), ans.end(), sortbysec); 

            // printarr(ans) ; 

            int damageSum = 0 ; 
            int currIndex = 0 ; 

            while(currIndex<n && k>0 ) {
                damageSum +=k ; 
                
                while(currIndex < n && ans[currIndex].first <= damageSum  )
                    currIndex++ ; 

                k -= ans[currIndex].second ;



            }
            if(currIndex >=n && ans[n-1].first <= damageSum)
                yes

            else 
                no




        }


    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>














