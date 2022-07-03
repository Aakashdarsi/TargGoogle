#include<iostream>
using namespace std;

class stack{
    public:
    int cap;
    int *arr;
    int top;
    stack(int capacity){
        arr = new int[capacity];
        cap = capacity;
        top = -1;
    }
    void push(int data){
        if(top>cap){
            cout<<"Elements cannot be inserted";
            return ;
        }
        else{
            top++;

            arr[top] = data;
        }
    }
    void pop(){
        int res = arr[top];
        top--;
        cout<<res<<" has been removed";
    }
    void peek(){
        cout<<arr[top]<<endl;
    }
    void size(){
        cout<<top+1<<endl;
    }
    void print(){
        if(top == -1){
            cout<<"Stack is empty";
            cout<<endl;
            return;
        }
        else{
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
        }
    }

};

int main(){
    stack *s = new stack(10);
    s->push(1);
    s->push(20);
    s->push(30);
    s->push(40);
    s->push(50);
    s->print();

}