#include <iostream>
using namespace std;

int binarysearch(int n,int arr[],int k){
    int s=0;
    int e=n;
    
    while(e>=s){
    int mid=(s+e)/2;
    if (arr[mid]==k){
       int ans;
       return mid;
    }
    else if(arr[mid]>=k){
        e=mid-1;}

    else{
      s=mid+1;}}

    return -1;
}
int main(){

    int n;
    cout<<"Size:";
    cin>>n;

    int arr[n];
    cout<<"Array:";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"key:";
    cin>>k;
    cout<<binarysearch(n,arr,k);
    
 
return 0;
}