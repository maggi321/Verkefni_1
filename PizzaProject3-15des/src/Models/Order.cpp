#include "Order.h"

Order::Order() {}
Order::Order(string name, int price) {
    this->name = name;
    this->price = price;
}
string Order::get_name() const {
    return this->name;
}
int Order::get_price() const {
    return this->price;
}
void Order::set_name(string newname) {
    name = newname;
}
void Order::set_price(int newprice) {
    price = newprice;
}
ostream& operator<< (ostream& out, const Order& order) {
    out << order.name << "-";
    return out;
}
string Order::get_place() const {
    return this->place;
}
string Order::get_botn() const {
    return this->botn;
}
void Order::set_place(string newplace) {
    place = newplace;
}
void Order::set_botn(string newbotn) {
    botn = newbotn;
}
string Order::get_tommur() const{
    return this->tommur;
}
string Order::get_alegg() const {
    return this->alegg;
}
string Order::get_medlaeti() const {
    return this->medlaeti;
}
string Order::get_verd() const {
    return this->verd;
}
string Order::get_greitt() const {
    return this->greitt;
}
string Order::get_nafn() const {
    return this->nafn;
}
void Order::set_tommur(string newtommur) {
    tommur = newtommur;
}
void Order::set_alegg(string newalegg) {
    alegg = newalegg;
}
void Order::set_medlaeti(string newmedlaeti) {
    medlaeti = newmedlaeti;
}
void Order::set_verd(string newverd) {
    verd = newverd;
}
void Order::set_greitt(string newgreitt) {
    greitt = newgreitt;
}
void Order::set_nafn(string newnafn) {
    nafn = newnafn;
}
string Order::get_gos() const {
    return this->gos;
}
void Order::set_gos(string newgos) {
    gos = newgos;
}
bool Order::get_merking() const {
    return this->merking;
}
void Order::set_merking(bool newmerking) {
    merking = newmerking;
}
string Order::get_breyta() const {
    return this->breyta;
}
void Order::set_breyta(string newbreyta) {
    breyta = newbreyta;
}

