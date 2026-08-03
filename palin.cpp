#include <iostream>
using namespace std;
int main()
{
    int n,temp, rev = 0;
    cout<<"Enter a number:";
    cin>>n;
    temp =n;
    while (n!=0)
    {
        rev = rev*10+n%10;
        n=n/10;

    }
    if (temp==rev)
      cout<<"The no. is Palindrome"<<rev<<endl;
    else
      cout<<"The no. is not Palindrome"<<rev<<endl;
    return 0;
}