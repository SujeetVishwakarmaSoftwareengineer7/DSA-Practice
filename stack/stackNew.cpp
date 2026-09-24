// implementation of stack using array
#include<iostream>
 
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

    // constructor
    stack( int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
     if( size - top > 1){
        top++;
        arr[top] = element;
     }
     else{
        cout<<" stack is  overflow"<<endl;
     }
    }
    void pop(){
     if( top >= 0){
        top--;
     }
     else{
        cout<<" stack is underflow"<<endl;
     }
    }
    int peek(){
        if( top >= 0){
         return arr[top];
        }
        else{
            cout<<" stack is empty"<<endl;
        }
    }

    bool isempty(){
     if( top == -1){
        return true;
     }
     else{
        return false;
     }
    }
};


int main(){
    stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<" the top is"<< st.peek() <<endl;
    st.pop();
    cout<<" the top is"<< st.peek() <<endl;
    st.pop();
    cout<<" the top is"<< st.peek() <<endl;
    st.pop();
    cout<<" the top is"<< st.peek() <<endl;


    if(st.isempty()){
        cout<< "stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}