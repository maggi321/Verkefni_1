#include "EmployeeService.h"

EmployeeService::EmployeeService() {
    //ctor
}
void EmployeeService::add_employee(const Employee& employee) {
    if(isValidName(employee)) {
        employee_repo.add_employee(employee);
    }
}
bool EmployeeService::isValidName(string name) {
    for(unsigned int i = 0; i < name.length(); i++) {
        if(!isalpha(name[i])) {
            throw InvalidNameException();
        }
    }
    return true;
}
/*
bool EmployeeService::isValidName(const Employee& employee) {
    string name = employee.get_name();
    for(unsigned int i = 0; i < name.length(); i++) {
        if(!isalpha(name[i])) {
            throw InvalidNameException();
        }
    }
    return true;
}
*/
