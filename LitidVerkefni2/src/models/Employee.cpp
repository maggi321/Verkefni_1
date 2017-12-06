#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee(string name, string ssn, int salary, int month, int year) {
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this->year = year;
}
string Employee::get_name() const {
    return this->name;
}
string Employee::get_ssn() const {
    return this->ssn;
}
int Employee::get_salary() const {
    return this->salary;
}
int Employee::get_month() const {
    return this->month;
}
int Employee::get_year() const {
    return this->year;
}
ostream& operator<< (ostream& out, const Employee& employee) {
    out << employee.name << ", " << employee.ssn << ", ";
    out << employee.salary << ", " << employee.month << ", ";
    out << employee.year << endl;
    return out;
}
