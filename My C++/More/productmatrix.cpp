#include <iostream>
using namespace std;

int main(){

int x=2,y=2,z=2;
/*cout<<"Rows of A:";
cin>>x;
cout<<"Colum of  A or Rows of B:";
cin>>z;
cout<<"Columns of B:";
cin>>y;*/
cout<<"Start";
int A[x][z]={{1,2},{3,4}};
int B[z][y]={{1,2},{3,4}};
int C[x][y]={{0,0},{0,0}};

for( int i=0 ; i<2; i++){
    for( int j=0 ; i<2; j++){
        for(int k=0 ; k<2 ; k++){
         C[i][j] += A[i][k]*B[k][j];
        }
    }
}
for( int i=0; i<x;i++){
    for(int j=0;j<y;j++){
        cout<<C[i][y]<<" ";
    
    }
    cout<<endl;
    
}
cout<<"DONE";
return 0;
}