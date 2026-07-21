#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year :"<<endl;
    cin>>year;
    if(year%4==0)
     cout<<"The year is leap"<<endl;
    else
     cout<<"The year is not leap"<<endl;
    return 0;
}