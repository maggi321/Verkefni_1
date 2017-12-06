#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H

#include "Employee.h"
#include "EmployeeRepository.h"
#include "InvalidNameException.h"

class EmployeeService
{
    public:
        EmployeeService();
        void add_employee(const Employee& employee);

    private:
        EmployeeRepository employee_repo;
        bool isValidName(string name);
        //bool isValidName(const Employee& employee);
};

#endif // EMPLOYEESERVICE_H
