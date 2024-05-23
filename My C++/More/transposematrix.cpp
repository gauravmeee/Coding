#include <iostream>
using namespace std;

int main(){

int n , m;
cout<<"No. Rows:";
cin>>n;
cout<<"NO. of Columns:";
cin>>m;

    int arr[n][m];
    for(int x=0 ; x<n; x++){
        for (int y=0; y<m; y++){
            cin>>arr[x][y];
        }
    }
    cout<<"Transposed Array: \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
         cout<<"\n";}
        
        

        return 0;
    }
