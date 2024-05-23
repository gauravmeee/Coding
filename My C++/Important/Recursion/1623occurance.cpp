#include <iostream>
using namespace std;

int firstocc( int arr[],int n, int i , int key){

    if( i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return firstocc( arr , n , i+1 , key);
}

int lastocc( int arr[], int n , int i , int key){
    
    if( i==n){
        return -1;
    }
    
    int restarray = lastocc( arr , n , i+1 , key);
    
    if( i==n){
        return -1;
    }
    
    if( restarray!= -1){
        return restarray;
    }

    if ( arr[i]==key){
        return i;
    }

    return -1;
}
int main(){

    int arr[]= { 1,2,3,4,2,3,4,5};
    int key;  cin>>key;

    cout<<firstocc(arr , 8, 0, key)<<endl;
    cout<<lastocc( arr,8 , 0 , key )<<endl;
    return 0;

}