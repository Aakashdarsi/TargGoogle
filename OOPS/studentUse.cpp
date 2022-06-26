#include<iostream>
#include "student.cpp"
using namespace std;
int main(){

student s1;
student s2,s3,s4;

// creating objects dynamically

student *s6 = new student();
s1.age = 24;
s1.roll = 101;
cout<<s1.age<<endl;
cout<<s1.roll<<endl;
(*s6).age = 24;
(*s6).roll = 45;
cout<<(*s6).age<<endl;
cout<<(*s6).roll<<endl;
return 0;
}
