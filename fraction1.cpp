#include<iostream>
using namespace std;
class Fraction
{
    int numerator, denominator;
public:    
    void accept()
    {
        cout<<"Enter numerator and denominator:";
        cin>>numerator>>denominator;
    }
    Fraction add(Fraction f)
    {
        Fraction result;
        result.numerator=numerator * f.denominator + f.numerator * denominator;
        result.denominator = denominator * f.denominator;
        return result;
    }
    void display()
    {
        cout<<numerator<< "/" <<denominator<<endl;
    }
};

int main()
{
    Fraction f1, f2, f3;
    cout<< "Enter the 1st fraction:" << endl;
    f1.accept();
    cout<< "Enter the 2nd fraction:" << endl;
    f2.accept();
    f3 = f1.add(f2);
    cout<<"Addition=";
    f3.display();
    return 0;
}