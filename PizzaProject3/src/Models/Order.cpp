

<<<<<<< HEAD
=======
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
>>>>>>> 0c2303eb8df41a36604de70bf7761c5982ae66dc
