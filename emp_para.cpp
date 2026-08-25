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

    void display()
    {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << empSalary << endl;
    }
};

int main()
{
    int id;
    string name;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Employee Salary: ";
    cin >> salary;

    Employee e1(id, name, salary);
    e1.display();
    return 0;
}