#include "EmployeeService.h"

int const SSN_SIZE = 10;

EmployeeService::EmployeeService() {
    //ctor
}
void EmployeeService::add_employee(const Employee& employee) {
        employee_repo.add_employee(employee);
}
bool EmployeeService::isValidName(string name) {
    for(unsigned int i = 0; i < name.length(); i++) {
        if(!isalpha(name[i])) {
            throw InvalidNameException();
        }
    }
    return true;
}
bool EmployeeService::isValidSsn(string ssn) {
    for(unsigned int i = 0; i < ssn.length(); i++){
        if(isalpha(ssn[i]) || ssn.length() != SSN_SIZE){
            throw InvalidSsnException();
        }
    }
    return true;
}
bool EmployeeService::isValidSalary(int salary) {
    if(salary < 0){
        throw InvalidSalaryException();
    }
    return true;
}
bool EmployeeService::isValidMonth(int month) {
    if(month <= 0 || month > 12){
        throw InvalidMonthException();
    }
    return true;
}
bool EmployeeService::isValidYear(int year) {
    if(year != 2017){
        throw InvalidYearException();
    }
    return true;
}

vector<Employee> EmployeeService::find_ssn(string ssn) {
    return employee_repo.find_ssn(ssn);
}
