#ifndef MAINUI_H
#define MAINUI_H

#include "Employee.h"
#include "EmployeeService.h"
class MainUI
{
    public:
        MainUI();
        void StartUI();

    private:
        void validate_user_input(char input);
        Employee create_employee();
        EmployeeService employee_service;
};

#endif // MAINUI_H
