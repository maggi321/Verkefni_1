#ifndef EMPLOYEEREPOSITORY_H
#define EMPLOYEEREPOSITORY_H

#include "Employee.h"
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

class EmployeeRepository
{
    public:
        EmployeeRepository();
        void add_employee(const Employee& employee);
        void load_salaries();
        vector<Employee> find_ssn(string ssn);

    private:
        string file;
        vector<Employee> salaries;
};

#endif // EMPLOYEEREPOSITORY_H
