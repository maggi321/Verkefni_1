#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include<iostream>
using namespace std;

class Employee
{
    public:
        Employee(string name, string ssn, int salary, int month, int year);
        string get_name();
        string get_ssn();
        int get_salary();
        int get_month();
        int get_year();
        friend ostream& operator<< (ostream& out, const Employee& employee);

    private:
        string name;
        string ssn;
        int salary;
        int month;
        int year;
};

#endif // EMPLOYEE_H
