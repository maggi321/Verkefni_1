#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include<iostream>
using namespace std;

class Employee
{
    public:
        Employee(string name, string ssn, int salary, int month, int year);
        Employee();
        string get_name() const;
        string get_ssn() const;
        int get_salary() const;
        int get_month() const;
        int get_year() const;
        void set_name(string name);
        void set_ssn(string ssn);
        void set_salary(int);
        void set_month(int);
        void set_year(int);

        friend ostream& operator<< (ostream& out, const Employee& employee);
        friend istream& operator >>(istream& in, Employee employee);

    private:
        string name;
        string ssn;
        int salary;
        int month;
        int year;
};

#endif // EMPLOYEE_H
