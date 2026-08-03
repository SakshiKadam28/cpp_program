#include <iostream>
using namespace std;

void swapValue(int a, int b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside Function: a = " << a << " b = " << b << endl;
}

int main() 
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    swapValue(x, y);

    cout << "Outside Function: x = " << x << " y = " << y << endl;

    return 0;
}