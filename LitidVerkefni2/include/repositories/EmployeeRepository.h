#ifndef EMPLOYEEREPOSITORY_H
#define EMPLOYEEREPOSITORY_H

#include "Employee.h"
#include <fstream>
#include <vector>

class EmployeeRepository
{
    public:
        EmployeeRepository();
        void add_employee(const Employee& employee);
        string find_ssn(string ssn);

    private:
        vector<string> salaries;
};

#endif // EMPLOYEEREPOSITORY_H
