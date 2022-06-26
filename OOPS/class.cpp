#include<iostream>
using namespace std;

class Student{
    private:
    int age;
    string name;
    public:
    void setName(string n){
        this->name = n;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
    string getName(){
        return name;
    }
};

int main(){
    Student *s = new Student();
    s->setName("Aakash");
    cout<<s->getName();
}