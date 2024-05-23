// To find ith element in fabonnaci series 0 1 1 2 3 5 8 ..
#include <iostream>
using namespace std;

int fabith(int i){
    
    if(i==0 || i==1){ // base case
        return i;
    
    }

    return fabith(i-1)+fabith(i-2);

}

int main(){

    int n; cin>>n;
    cout<<fabith(n)<<endl;
    return 0;
}