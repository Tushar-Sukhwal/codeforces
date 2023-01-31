/* //<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli Tushars_07 ; cin>>Tushars_07; while(Tushars_07--)
#define vi vector<int> 
#define fi for(int i = 0 ; i<n ; i++) 
#define fj for(int i = 0 ; i<n ; i++) 
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ub  upper_bound // '>'
#define lb  lower_bound // '>='

void printarr(vector<int>& arr ){
    for(int i = 0 ; i<arr.size() ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test{
        lli n ; cin >> n ; 
        vi arr(n) , arr1(n) , arr2(n); fi cin >> arr[i] ; 

        

        unordered_map<int,int> occurance ;

        for(int i = 0 ; i<n ;i++){
            occurance[arr[i]]++;
        }

        int buffer ; 
        if(occurance[1]==0) buffer = 2 ; 
        else if(occurance[1]==1) buffer = 1 ; 
        else buffer = -10 ; 
        
        int flag = 0 ; 
        for(int i = 2 ; i<=n ;i++){
            if(buffer-occurance[i]<0) {
                flag = 1 ; 
                break ; 
            }
            buffer = 2-occurance[i]+buffer ; 
            
        }

        unordered_set<int> set ; 
        if(flag ==1 ) no
        else {
            yes

            //entering the first occurance of any number in first array 
            //and marking -1 in second array in the repective place 
            for(int i = 0 ;i<n ;i++){
                if (arr[i]==1){
                    arr1[i]=1;
                    arr2[i]=1; 
                }
                else if(occurance[arr[i]]==2 && set.count(arr[i])==0){
                    set.insert(arr[i]) ; 
                    arr1[i] = arr[i] ; 
                    arr2[i] = -1; 
                }
                else if (occurance[arr[i]]==1 ){
                    arr1[i]=arr[i];
                    arr2[i] = -1 ;
                }

                else if(set.count(arr[i])){
                    arr2[i]=arr[i];
                    arr1[i]=-1;
                }
            }
            // cout<<"arr1  ";
            // printarr(arr1) ;cout<<endl; 
            // cout<<"arr2  ";
            // printarr(arr2) ; cout<<endl;
            //completing the first array 
            for(int i = 0 ;i<n ;i++){
                if(arr1[i]==-1){
                    int j = arr2[i]-1 ; 
                    while(1){
                        if(occurance[j]==0 ){
                            arr1[i]=j; 
                            occurance[j]++;
                            break ; 
                        }
                        else if(occurance[j]==1){
                            arr1[i] = j ;
                            occurance[j]++;
                            break ; 
                        }
                        j--;
                    }
                }
            }
            //completing the second array 
            for(int i = 0 ;i<n ;i++){
                if(arr2[i]==-1){
                    int j = arr1[i]-1 ; 
                    while(1){
                        if(occurance[j]==0 ){
                            arr2[i]=j; 
                            occurance[j]++;
                            break ; 
                        }
                        else if(occurance[j]==1){
                            arr2[i] = j ;
                            occurance[j]++;
                            break ; 
                        }
                        j--;
                    }
                }
            }







            //printing the first array 
            for(int i = 0 ;i<n ;i++){
                cout<<arr1[i]<<" "; 
            }
            cout<<endl; 
            //printing the second array 
            for(int i = 0 ;i<n ;i++){
                cout<<arr2[i]<<" ";
            }
            cout<<endl; 
        }
    }

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>


///////////////////         ///////////  //      //        //\       //////////
        //                  //           //      //       //  \      //      //  
        //    //      //   //            //      //      //   \      //      //  
        //    //      //   ///////////   //////////     //     \     //////////
        //    //      //            //   //      //    //=======\    ////
        //    //      //            //   //      //   //         \   //  //
        //    //////////   ///////////   //      //  //            \ //    // 


 */



//! new approach 



//<<<<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define no cout<<"NO \n";
#define yes cout<<"YES \n";
#define test lli Tushars_07 ; cin>>Tushars_07; while(Tushars_07--)
#define vi vector<int> 
#define fi for(int i = 0 ; i<n ; i++) 
#define fj for(int i = 0 ; i<n ; i++) 
#define pb push_back
#define mp make_pair
#define endl "\n"
#define ub  upper_bound // '>'
#define lb  lower_bound // '>='


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test{
        lli n ; cin >> n ; vi a(n) ; fi cin >> a[i] ; 
        vi copy = a ;



        
    }

    return 0;
}
//<<<<<<<<<<Tushars_07>>>>>>>>>>>>>>>>


///////////////////         ///////////  //      //        //\       //////////
        //                  //           //      //       //  \      //      //  
        //    //      //   //            //      //      //   \      //      //  
        //    //      //   ///////////   //////////     //     \     //////////
        //    //      //            //   //      //    //=======\    ////
        //    //      //            //   //      //   //         \   //  //
        //    //////////   ///////////   //      //  //            \ //    // 


