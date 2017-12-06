#include "EmployeeRepository.h"

EmployeeRepository::EmployeeRepository() {
    //ctor
}
void EmployeeRepository::add_employee(const Employee& employee) {
    ofstream fout;
    fout.open("employee.txt", ios::app);
    if(fout.is_open()) {
        fout << employee;
        fout.close();
    }
    else {
        cout << "File write error" << endl;
    }
}
string EmployeeRepository::find_ssn(string ssn) {

}
