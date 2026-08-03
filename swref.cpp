#include <iostream>
using namespace std;

void swapRef(int &a, int &b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    swapRef(x, y);

    cout << "After Swapping: x = " << x << " y = " << y;

    return 0;
}