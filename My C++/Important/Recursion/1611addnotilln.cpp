// To find sum of n+(n-1)+(n-2)+...1

#include <iostream>
using namespace std;


int addn(int n){

    if(n==0){  //base case
    return 0;
    }
    int prevaddn = addn(n-1);
    return n + prevaddn;
}
int main(){

int n;
cin>>n;

cout<<addn(n)<<endl;

return 0;

}