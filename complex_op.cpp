#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
      void input()
      {
        cin>>real>>img;
      }
      
      void add(complex c2, complex c3)
      {
        cout<<"Addition="<<real + c2.real + c3.real<<"+"<<img + c2.img + c3.img<<"i"<<endl;
      }
      void sub(complex c2, complex c3)
      {
        cout<<"Subtracion="<<real - c2.real - c3.real<<"+"<<img - c2.img - c3.img<<"i"<<endl;
      }

};
int main()
{
    complex c1,c2,c3;
    cout<<"Enter 1st complex no:";
    c1.input();
    cout<<"Enter 2nd complex no:";
    c2.input();
    cout<<"Enter 3rd complex no:";
    c3.input();

    c1.add(c2,c3);
    c1.sub(c2,c3);
    return 0;
}
