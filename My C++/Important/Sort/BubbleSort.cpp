// Bubble Sorts

#include <iostream>
using namespace std;

int main(){

    int n=5 ; 
    int arr[]={ 1,6,8,4,3};
    int counter =0;
    while( counter <n-1){                         // or we can also use for( int j=0 ; j<n-1; j++)
    for( int i=0 ; i<n - counter -1 ; i++){
        if( arr[i]>arr[i+1] ){
            int temp=arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        counter ++ ;
        }}
    }
for( int i=0 ; i<n ; i++){
   cout<<arr[i];
}
return 0;
}