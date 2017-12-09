#include "EmployeeRepository.h"
#include <sstream>

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
void EmployeeRepository::load_salaries() {
    ifstream fin;
    fin.open("employee.txt");

    if(fin.is_open()) {
        while(!fin.eof()) {
            Employee E;
            fin >> file;
            stringstream ss(file);
            string item;
            int counter = 0;

            while(getline(ss, item, ',')) {
                if (counter == 0){
                    E.set_name(item);
                }
                else if (counter == 1){
                    E.set_ssn(item);
                }
                else if (counter == 2){
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    E.set_salary(x);
                }
                else if (counter == 3){
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    E.set_month(x);
                }
                else if (counter == 4){
                    string s = item;
                    stringstream testing(s);
                    int x = 0;
                    testing >> x;
                    E.set_year(x);
                }
                counter++;
            }
            salaries.push_back(E);
        }
        fin.close();
    }
    else {
        cout << "File not opened!" << endl;
    }
}
vector<Employee> EmployeeRepository::find_ssn(string ssn) {
    salaries.clear();
    load_salaries();
    string ssn_output = "";
    vector<Employee> allSalariesWithSsn;

    for (unsigned int i = 0; i < salaries.size(); i++){
        if (salaries[i].get_ssn() == ssn){
            allSalariesWithSsn.push_back(salaries[i]);
        }
    }
    return allSalariesWithSsn;
}
