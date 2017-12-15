#include "Medlaeti.h"

Medlaeti::Medlaeti() {}
Medlaeti::Medlaeti(string name, int price) {
    this->name = name;
    this->price = price;
}
string Medlaeti::get_name() const {
    return this->name;
}
int Medlaeti::get_price() const {
    return this->price;
}
void Medlaeti::set_name(string newname) {
    name = newname;
}
void Medlaeti::set_price(int newprice) {
    price = newprice;
}
ostream& operator<< (ostream& out, const Medlaeti& medlaeti) {
    out << medlaeti.name << "," << medlaeti.price << "," << endl;
    return out;
}
istream& operator >>(istream& in, Medlaeti medlaeti) {
    cout << "Nafn: ";
    in >> ws;
    getline(in, medlaeti.name);

    cout << "Verd: ";
    in >> medlaeti.price;

    return in;
}
