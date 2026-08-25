#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    string department;
    float basicSalary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void display()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }

    void calculateAnnualSalary()
    {
        float annualSalary;
        annualSalary = basicSalary * 12;
        cout << "Annual Salary: " << annualSalary << endl;
    }
};

int main()
{
    Employee e;
    e.accept();
    e.display();
    e.calculateAnnualSalary();

    return 0;
}