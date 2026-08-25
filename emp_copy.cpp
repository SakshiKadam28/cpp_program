#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string empName;
    float empSalary;

public:
    Employee(int id, string name, float salary)
    {
        empID = id;
        empName = name;
        empSalary = salary;
    }

    Employee(Employee &e)
    {
        empID = e.empID;
        empName = e.empName;
        empSalary = e.empSalary;
    }

    void display()
    {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << empSalary << endl;
    }
};

int main()
{
    Employee e1(101, "Sakshi", 25000);
    Employee e2(e1);
    cout << "Copied Employee Information:" << endl;
    e2.display();
    return 0;
}