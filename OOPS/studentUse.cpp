#include<iostream>
#include "student.cpp"

using namespace std;

int main()
{

// create object statically;

student s1;
student s2;
student s3,s4,s5;

// create object dynamically

student *s6 = new student;

// set the properties of objects 

s1.age = 21;
s1.roll = 38;

s1.display();

s2.age = 30;

(*s6).age = 45;
(*s6).roll = 48;

(*s6).display();
// alternate way
s6->age = 38;
cout<<s6->age<<endl;


return 0;

}
