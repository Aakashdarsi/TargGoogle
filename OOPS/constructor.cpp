#include<iostream>
using namespace std;

class Student {
    private:
    int age;
    string name;
    public:
    Student(int age,string name){
        this->age = age;
        this->name = name;
    }
    string getName(){

        return name;
    }
    int getAge(){
        return age;
    }
    ~Student(){
        cout<<"Destructor called";
    }
};

int main(){
    Student s(22,"Aakah");
    cout<<s.getName()<<" ";
    cout<<s.getAge()<<" ";

}