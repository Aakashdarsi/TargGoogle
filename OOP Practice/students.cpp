#include<iostream>
#include"student.cpp"
using namespace std;

int main(){

    student s;
    s.age = 10;
    s.roll_number = 2344;
    cout<<s.age<<" "<<s.roll_number;
    student *s2 = new student;
    s2->age = 22;
    s2->roll_number = 33;
    cout<<s2->age<<" "<<s2->roll_number;
    return 0;
}