#include<iostream>
using namespace std;

int main()
{
int i= 10;
cout<<&i<<endl;
int *p;
p = &i;
cout<<*p<<endl;

float f = 10.0;
float *g = &f;
cout<<g<<endl;

double d = 122.32;
double *dp = &d;
cout<<dp<<endl;
return 0;
}
