#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    
    string s;
    cin>>s;
    stack<char> st;

    for(int i; i<s.lenght();i++ ){
        if( st.empty()){
            st.push([i])
        }

        if(st.top()=='(' && s[i]==")" ||
        st.top()=='[' && s[i]=="]" ||
        st.top()=='{' && s[i]==")}" ){
            st.pop();

        else
            st.push([i]);
        }
    }
    
    if( st.empty())
    cout<<"Balanced";

    else
    cout<<"Unbalanced";

    return 0;
}