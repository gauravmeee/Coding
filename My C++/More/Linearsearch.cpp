#include <iostream>
using namespace std;

int linearsearch(int a[],int k,int s)
{for(int i=0 ; i<s; i++){
        if(k==a[i]){
            return i;
            
        }
    }
    return -1;}

int main(){
    int size;
    
    cin>>size;

    int arr[size];

    for(int i=0 ; i<size; i++){
         cin>>arr[i];
    }

    int key;
    
    cin>>key;

    cout<<linearsearch(arr,key, size);
    


    return 0;
}
