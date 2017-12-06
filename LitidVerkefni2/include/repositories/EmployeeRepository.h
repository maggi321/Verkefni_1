#ifndef EMPLOYEEREPOSITORY_H
#define EMPLOYEEREPOSITORY_H

#include "Employee.h"
#include <fstream>

class EmployeeRepository
{
    public:
        EmployeeRepository();
        void add_employee(const Employee& employee);

    private:
};

#endif // EMPLOYEEREPOSITORY_H
