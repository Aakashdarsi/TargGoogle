#include<iostream>
using namespace std;

class A{
    private:
    int a,b,c;
    public:
    int z;
};

class B: public A{


    public:
    void display(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"c="<<c<<endl;
        cout<<"z="<<z<<endl;
    }
};
int main(){
    B obj;
    obj.a=10;
    obj.b=20;
    obj.c=30;
    obj.z=40;
    obj.display();
    return 0;
}