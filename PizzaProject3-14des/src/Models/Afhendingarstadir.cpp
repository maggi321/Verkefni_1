#include "Afhendingarstadir.h"

Afhendingarstadir::Afhendingarstadir() {}

Afhendingarstadir::Afhendingarstadir(string name, int number) {
    this->name = name;
    this->number = number;
}
string Afhendingarstadir::get_name() const {
    return this->name;
}
int Afhendingarstadir::get_number() const {
    return this->number;
}
void Afhendingarstadir::set_name(string newname) {
    name = newname;
}
void Afhendingarstadir::set_number(int newnumber) {
    number = newnumber;
}
ostream& operator<< (ostream& out, const Afhendingarstadir& afhendingarstadur) {
    out << afhendingarstadur.name << "," << afhendingarstadur.number << "," << endl;
    return out;
}
istream& operator >>(istream& in, Afhendingarstadir afhendingarstadur) {
    cout << "Gotuheiti: ";
    in >> ws;
    getline(in, afhendingarstadur.name);

    cout << "Numer: ";
    in >> afhendingarstadur.number;

    return in;
}
