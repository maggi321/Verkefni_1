#include "MainUI.h"
#include <cstdlib>
MainUI::MainUI() {
    //ctor
}
void MainUI::StartUI () {
    char select = '\0';

    while(select != 'q') {
        cout << "Pick a option:" << endl;
        cout << "1. Add a salary record" << endl;
        cout << "2. Get all salary records for a given SSN" << endl;
        cout << "3. Get a total salary for a given year and a given SSN" << endl;
        cout << "4. Get the name of the employee with the highest total salary for a given year" << endl;
        cout << "q. To quit program" << endl;
        cin >> select;

        user_selection(select);
    }
}
void MainUI::user_selection(char input) {
    string ssn, year;
    if(input == '1') {
        employee_service.add_employee(create_employee());
    }
    else if(input == '2') {
        cout << "SSN: ";
        cin >> ssn;

        cout << employee_service.find_ssn(ssn) << endl;
    }
    else if(input == '3') {
    }
    else if(input == '4') {
    }
}
Employee MainUI::create_employee() {
    string name, ssn;
    int salary, month, year;
    bool allowed = false;
    do {
        try {
            cout << "Name: ";
            cin >> ws;
            getline(cin, name);
            allowed = employee_service.isValidName(name);
        }
        catch(InvalidNameException) {
            cout << "Invalid Name!" << endl << endl;
        }
    }
    while(!allowed);

    allowed = false;
    do {
        try {
            cout << "Ssn: ";
            cin >> ssn;
            allowed = employee_service.isValidSsn(ssn);
        }
        catch(InvalidSsnException) {
            cout << "Invalid SSN!" << endl << endl;
        }
    }
    while(!allowed);

    allowed = false;
    do {
        try {
            cout << "Salary: ";
            cin >> salary;
            allowed = employee_service.isValidSalary(salary);
        }
        catch(InvalidSalaryException) {
            cout << "Invalid Salary!" << endl << endl;
        }
    }
    while(!allowed);

    allowed = false;
    do {
        try {
            cout << "Month: ";
            cin >> month;
            allowed = employee_service.isValidMonth(month);
        }
        catch(InvalidMonthException) {
            cout << "Invalid Month!" << endl << endl;
        }
    }
    while(!allowed);

    allowed = false;
    do {
        try {
            cout << "Year: ";
            cin >> year;
            allowed = employee_service.isValidYear(year);
        }
        catch(InvalidYearException) {
            cout << "Invalid year" << endl << endl;
        }
    }
    while(!allowed);
    cout << endl;

    Employee employee(name, ssn, salary, month, year);
    return employee;
}
