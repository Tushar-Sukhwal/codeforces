#include <bits/stdc++.h>
using namespace std;

int main(){

int k , l , m , n , d ; 
cin >> k >> l >> m >> n >> d ; 

vector<int> arr (d+1,0);

for(int i = 1 ; i<(d+1) && k*i<d+1 ;i++){
    int temp = k*i;
    arr[temp]=1;
    
}
for(int i = 1 ; i<(d+1) && l*i<(d+1) ;i++){
    int temp = l*i;
    arr[temp]=1;
    
}
for(int i = 1 ; i<(d+1) && m*i<d+1 ;i++){
    int temp = m*i;
    arr[temp]=1;
    
}
for(int i = 1 ; i<(d+1) && n*i<d+1 ;i++){
    int temp = n*i; 
    arr[temp]=1;

}
int counter = 0 ; 
for(int i = 0 ; i<d+1 ; i++){
    counter += arr[i];
}

cout<<counter; 

return 0;
}