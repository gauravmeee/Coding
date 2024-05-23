
#include <iostream>
using namespace std;

#define n 100

class Stack{
    int* arr;
    int top;

    public:
    Stack(){
    arr = new int[n];
    int top =-1;}

        void push( int x){
            if( top == n-1){
                cout<<"Stack Over flow"<<endl;
                return ;
            }
            top++;
            arr[top] = x;
        }

        int Top(){
            if( top == -1){
                cout<<"No element in stack";
                return -1;
                }
            return arr[top];
            }

        void pop(){
            if( top == -1){
                cout<<"No element to pop";
                return ;
            }
            top--;
        }

        bool empty(){
            return top==-1;
        }
};

int main(){

    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();

    cout<<st.empty()<<endl;


    return 0;
}