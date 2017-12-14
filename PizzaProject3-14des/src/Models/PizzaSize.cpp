#include "PizzaSize.h"

PizzaSize::PizzaSize() {}

PizzaSize::PizzaSize(string tommur, int price) {
    this->tommur = tommur;
    this->price = price;
}
string PizzaSize::get_tommur() const {
    return this->tommur;
}
int PizzaSize::get_price() const {
    return this->price;
}
void PizzaSize::set_tommur(string newtommur) {
    tommur = newtommur;
}
void PizzaSize::set_price(int newprice) {
    price = newprice;
}
ostream& operator<< (ostream& out, const PizzaSize& pizza_size) {
    out << pizza_size.tommur << "," << pizza_size.price << "," << endl;
    return out;
}
istream& operator >>(istream& in, PizzaSize pizza_size) {
    cout << "Staerd(tommur): ";
    in >> ws;
    getline(in, pizza_size.tommur);

    cout << "Verd: ";
    in >> pizza_size.price;

    return in;
}
