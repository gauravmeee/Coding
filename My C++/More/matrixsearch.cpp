#include <iostream>
using namespace std;

int main(){

int n , m;
cout<<"Enter no. of rows:";
cin>>n;
cout<<"Enter no. of columns:";
cin>>m;
int arr[n][m];
cout<<"Enter the Matrix:";
for(int x=0;x<n;x++){
    for( int y=0; y<m;y++){
        cout<<"Enter element "<<x<<y<<":";
        cin>>arr[x][y];
    }
}

int k ;
cout<<"Enter the no. to be searched:";
cin>>k;
bool flag=false;
for(int x=0;x<n;x++){
    for( int y=0; y<m;y++){
        if(arr[x][y]==k){
            flag=1;
            cout<<x<<y<<" ";
        }
    }
}

if(flag) cout<<"Element found\n";
else cout<<"Element not found\n";
return 0;

}