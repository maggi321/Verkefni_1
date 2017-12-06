#include "MainUI.h"
#include <cstdlib>
MainUI::MainUI() {
    //ctor
}
void MainUI::StartUI () {
    char select = '\0';
    while(select != 'q') {
        cout << "press a to add" << endl;
        cout << "press v to view" << endl;
        cin >> select;

        validate_user_input(select);
    }
}
void MainUI::validate_user_input(char input) {
    if(input == 'a') {
        try {
            employee_service.add_employee(create_employee());
        }
        catch(InvalidNameException) {
            system("CLS");
            cout << "Invalid Name!" << endl << endl;
        }
    }
    else if(input == 'v') {
        cout << "view employee" << endl;
    }
}
Employee MainUI::create_employee() {
    string name, ssn;
    int salary, month, year;
    bool allowed = false;
    do {
        try {
            cout << "Name: ";
            cin >> name;
            getline(cin, name);
            allowed = employee_service.isValidName(name);
        }
        catch(InvalidNameException) {
            cout << "Invalid Name!" << endl << endl;
        }
    }
    while(!allowed);

    cout << "Ssn: ";
    cin >> ssn;
    cout << "Salary: ";
    cin >> salary;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
    Employee employee(name, ssn, salary, month, year);
    return employee;
}
