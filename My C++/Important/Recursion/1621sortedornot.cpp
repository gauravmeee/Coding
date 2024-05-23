//To check if an array is sorted or not

#include <iostream>
using namespace std;

bool issorted( int n, int arr[]){
if (n==1){  //base case
    return true;
}

bool restArray= issorted(n-1, arr+1);
return( arr[0]<arr[1] && restArray);
}

int main(){

    int arr[]={1,2,3,4,5};
    cout<<issorted(5,arr);

return 0;
}