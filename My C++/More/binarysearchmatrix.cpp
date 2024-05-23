#include "bits/stdc++.h"
using namespace std;

int32_t main(){
    int n; cout<<"Row: "; cin >>n;
    int m; cout<<"Column: "; cin>>m;
    
    cout<<"Matrics:\n" ; int mat[n][m];

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }

    int target;
    cout<<"Enter no. to be found: "; cin>>target;

    
    int r=0,c=m-1;
    bool found= false;
    while(r<n and c>=0){
        if(mat[r][c]== target){
            found = true;
            cout<<r<<" "<<c<<endl;
        }
        if(mat[r][c]> target){
            c--;
        }
        else{r++;}
    } 
    if(found)
    cout<<"Element found";
    else cout<<"Element doesn't exist";
}