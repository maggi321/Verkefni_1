#include "PizzaBotn.h"

PizzaBotn::PizzaBotn() {}

PizzaBotn::PizzaBotn(string name, int price) {
    this->name = name;
    this->price = price;
}
string PizzaBotn::get_name() const {
    return this->name;
}
int PizzaBotn::get_price() const {
    return this->price;
}
void PizzaBotn::set_name(string newname) {
    name = newname;
}
void PizzaBotn::set_price(int newprice) {
    price = newprice;
}
ostream& operator<< (ostream& out, const PizzaBotn& pizzabotn) {
    out << pizzabotn.name << "," << pizzabotn.price << "," << endl;
    return out;
}
istream& operator >>(istream& in, PizzaBotn pizzabotn) {
    cout << "Nafn: ";
    in >> ws;
    getline(in, pizzabotn.name);

    cout << "Verd: ";
    in >> pizzabotn.price;

    return in;
}
