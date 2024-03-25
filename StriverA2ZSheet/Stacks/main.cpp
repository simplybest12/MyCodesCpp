#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>
#include <cmath>

using namespace std;

class Stack{
    //properties
    public:
      int top;
      int *arr;
      int size;

    Stack(int size){
        this-> size = size;
        arr = new int[size];
        top = -1;
    }

    //behaviour

    void push(int element){
        if(top == size-1){
            cout << "Stack is full"<< endl;
            return ;
        }else{
            top++;
            arr[top] = element;
        }
    }

    void pop(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return;
        }else{
            top = top - 1;

        }
    }

    int peek(){
        if (top==-1)
        {
            cout << "Stack is Empty\n";
            return -1;
        }else{
            return arr[top];
        }
        
    }
    bool isEmpty(){
        return (top == -1);
    } 

};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.peek();
}

