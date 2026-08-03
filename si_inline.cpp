#include <iostream>
using namespace std;

inline float SI(float p, float r, float t) 
{
    return (p * r * t) / 100;
}

int main() 
{
    float p, r, t;

    cout << "Enter Principal, Rate and Time: ";
    cin >> p >> r >> t;

    cout << "Simple Interest = " << SI(p, r, t);

    return 0;
}