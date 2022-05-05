#include<iostream>
using namespace std;

void replace_char(char s[] , char d)
{

if(s[0] == '\0')
{
return ;
}
else if(s[0] == 'b')
{
s[0] = d;


}
return replace_char(s+1,d);





}




int main()
{

char s[] = {'b','a','b','a','b','b','c'};
char d = 'x';
replace_char(s,d);
for(int i =0 ; s[i] != '\0' ;i++)
{
cout<<s[i]<<" ";

}
return 0;
}
