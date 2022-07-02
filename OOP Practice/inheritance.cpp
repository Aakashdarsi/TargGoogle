#include<iostream>
using namespace std;
class shape{
    protected:
    int length;
    int width;
    public : 
    void setLength(int l){
        this->length = l;
        return ;


    }
    void setWidth(int w){
        this->width = w;
        return ;
    }
};
class Rectangle : public shape{
    public:
    void calArea(){
        cout<<length*width<<endl;
    }
};

int main(){
    Rectangle r;
    r.setLength(10);
    r.setWidth(23);
    r.calArea();
    return 0;
}