#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n ; 
    int counter = 0 ; 
    for(int i = 0 ; i<n ; i++){
        string a = "Tetrahedron" ;
        string b = "Cube" ;
        string c = "Octahedron"  ; 
        string d = "Dodecahedron" ; 
        string e = "Icosahedron" ; 

        string s ; 
        cin>>s ; 
 

        if(s==a)
            counter = counter + 4 ;  

        else if(s==b)
            counter = counter + 6 ; 

        else if(s==c)
            counter = counter + 8 ; 

        else if(s==d)
            counter = counter + 12 ; 

        else if(s==e)
            counter = counter + 20 ; 



    }
        cout<<counter ; 


return 0;
}