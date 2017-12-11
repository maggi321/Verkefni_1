#include "Gos.h"

Gos::Gos() {}
Gos::Gos(string name, int price) {
    this->name = name;
    this->price = price;
}
string Gos::get_name() const {
    return this->name;
}
int Gos::get_price() const {
    return this->price;
}
void Gos::set_name(string newname) {
    name = newname;
}
void Gos::set_price(int newprice) {
    price = newprice;
}
ostream& operator<< (ostream& out, const Gos& gos) {
    out << gos.name << "," << gos.price << "," << endl;
    return out;
}
istream& operator >>(istream& in, Gos gos) {
    cout << "Nafn: ";
    in >> ws;
    getline(in, gos.name);

    cout << "Verd: ";
    in >> gos.price;

    return in;
}
