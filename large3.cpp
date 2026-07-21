#include <iostream>
using namespace std;
int main()
{
 int a,b,c;
 cout<<"Enter the value of a,b and c:"<<endl;
 cin>>a>>b>>c;
 if(a>=b && a>=c)
  cout<<"Largest no. ="<<a<<endl;
else if(b>=a && b>=c)
  cout<<"Largest no. ="<<b<<endl;
else
  cout<<"Largest no. ="<<c<<endl;
return 0;
}
 