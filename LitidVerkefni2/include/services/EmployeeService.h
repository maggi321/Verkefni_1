#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H

#include "Employee.h"
#include "EmployeeRepository.h"
#include "InvalidNameException.h"
#include "InvalidSsnException.h"
#include "InvalidSalaryException.h"
#include "InvalidMonthException.h"
#include "InvalidYearException.h"

class EmployeeService
{
    public:
        EmployeeService();
        void add_employee(const Employee& employee);

        bool isValidName(string name);
        bool isValidSsn(string ssn);
        bool isValidSalary(int salary);
        bool isValidMonth(int month);
        bool isValidYear(int year);

        string find_ssn(string ssn);


    private:
        EmployeeRepository employee_repo;
};

#endif // EMPLOYEESERVICE_H
