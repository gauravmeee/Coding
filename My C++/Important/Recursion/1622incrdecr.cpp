#include <iostream>
using namespace std;

void incr(int n){

    if(n==1){
        cout<<"1"<<" ";
        return ;
    }
   
 incr(n-1);
 cout<<n<<" ";  //cout after call in increasing number
}

void decr( int n){
    
    if(n==1){
        cout<<"1"<<" ";
        return ;
    }
     
     cout<<n<<" "; // cout begore call in decreasing number
     decr(n-1);
    
    
}

int main(){

    int n ; cin>>n;
    incr(n);
    cout<<endl;
    decr(n);
}