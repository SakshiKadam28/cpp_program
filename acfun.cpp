#include <iostream>
using namespace std;

const float PI = 3.14;

void circle(float r) 
{
    cout << "Area = " << PI * r * r << endl;
    cout << "Circumference = " << 2 * PI * r;
}

int main() 
{
    float radius;
    cout << "Enter radius: ";
    cin >> radius;

    circle(radius);

    return 0;
}