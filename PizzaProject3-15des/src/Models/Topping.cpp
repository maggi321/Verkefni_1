#include "Topping.h"

Topping::Topping() {}

Topping::Topping(string name, int price) {
    this->name = name;
    this->price = price;
}
string Topping::get_name() const {
    return this->name;
}
int Topping::get_price() const {
    return this->price;
}
void Topping::set_name(string newname) {
    name = newname;
}
void Topping::set_price(int newprice) {
    price = newprice;
}
ostream& operator<< (ostream& out, const Topping& topping) {
    out << topping.name << "," << topping.price << "," << endl;
    return out;
}
istream& operator >>(istream& in, Topping topping) {
    cout << "Nafn: ";
    in >> ws;
    getline(in, topping.name);

    cout << "Verd: ";
    in >> topping.price;

    return in;
}
