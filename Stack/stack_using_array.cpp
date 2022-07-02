#include<iostream>
using namespace std;
class Stack{
    public:
    int cap;
    int *arr;
    int top ; 
    Stack(int capacity){
        cap = capacity;
        arr = new int[cap];
        top = -1;
    }
    void push(int data){
        if(top>cap){
            cout<<"Cannot insert because already fulll!!";
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
    void isEmpty(){
        if(top == -1){
            cout<<"Stack is empty";
            cout<<endl;
        }
        else{
            cout<<"Not empty"<<endl;
        }
        
    }
    void print(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }



};



int main(){
    Stack *s = new Stack(10);
    s->push(1);
    s->push(20);
    s->print();
    s->isEmpty();

}