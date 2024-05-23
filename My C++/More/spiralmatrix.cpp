#include <iostream>
using namespace std;

int main(){

int n ,m;
cout<<"Enter no. of rows:";
cin>>n;
cout<<"Enter no. of columns:";
cin>>m;
int arr[n][m];
cout<<"Enter the Matrix:";
for(int x=0;x<n;x++){
    for( int y=0; y<m;y++){
        cin>>arr[x][y];
    }
}

int rs=0,re=n-1;
int cs=0,ce=m-1;

while(cs<=ce && rs<=re){
for(int i=cs; i<=ce;i++){
    cout<<arr[rs][i]<<" ";}
    rs++;
     
for(int j=rs ; j<=re;j++){
    cout<<arr[j][ce]<<" ";}
    ce--;

for(int i=ce;i>=cs;i--){
    cout<<arr[re][i]<<" ";}
    re--;

for(int j=re; j>=rs; j--){
    cout<<arr[j][cs]<<" ";}
    cs++;}


return 0;
}