#include <iostream>
using namespace std;

void revstr(string s){
    if(s.length()==0){  //base case
        return ;
    }
    string ros = s.substr(1);
    revstr(ros);
    cout<<s[0];
    }

int main(){
    revstr("binod");
    return 0;
}