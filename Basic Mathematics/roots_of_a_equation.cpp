#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int exp = b*b - 4*(a*c);
    if(exp < 0){
        cout<<"Imaginary roots"<<endl;
    }
    else if(exp == 0){
        float root = (-b + sqrt(b*b- (4*a*c)))/(2*a);
        cout<<"Both roots are "<<root;
    }
    else{
        float root1 = (-b + sqrt(b*b- (4*a*c)))/(2*a); 
        float root2 = (-b - sqrt(b*b- (4*a*c)))/(2*a);
        cout<<"Root 1 is : "<<root1<<" Root 2 is : "<<root2;

    }
    return 0;
}