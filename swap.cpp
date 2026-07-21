#include <iostream>
using namespace std;
int main()
{
 int a,b,student;
 cout<<"Enter the value of a and b:"<<endl;
 cin>>a>>b;
 student=a;
 a=b;
 b=student;
 cout<<"After swappping:"<<endl;
 cout<<"a = "<<a<<endl;
 cout<<"b = "<<b<<endl;
 return 0;
}


