#include<iostream>
using namespace std;

class Employee
{
    int empID;
    string empName;
    float empSalary;

public:
    Employee()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Employee Salary: ";
        cin >> empSalary;
    }
    void display()
    {
        cout<<"Employee ID: "<<empID<<endl;
        cout<<"Employee Name: "<<empName<<endl;
        cout<<"employee Salary :"<<empSalary<<endl;
    }

};

int main()
{
    Employee e1;
    e1.display();
    return 0;
}