#include <iostream>
using namespace std;
class Rectangle
{
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Area = " << length * breadth << endl;
    }
};

int main()
{
    int l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;

    Rectangle r1(l, b);
    Rectangle r2(r1);
    cout << "\nCopied Rectangle:" << endl;
    r2.display();

    return 0;
}