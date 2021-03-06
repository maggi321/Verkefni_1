#include "Service.h"

Service::Service() {
    //ctor
}

void Service::add_topping(const Topping& topping) {
    topping_repo.add_topping(topping);
}
vector<Topping> Service::load_topping() {
    return topping_repo.load_topping();
}
void Service::add_pizza_size(const PizzaSize& pizza_size) {
    pizza_size_repo.add_pizza_size(pizza_size);
}
vector<PizzaSize> Service::load_pizza_size() {
    return pizza_size_repo.load_pizza_size();
}
void Service::add_medlaeti(const Medlaeti& medlaeti) {
    medlaeti_repo.add_medlaeti(medlaeti);
}
vector<Medlaeti> Service::load_medlaeti() {
    return medlaeti_repo.load_medlaeti();
}
void Service::add_gos(const Gos& gos) {
    gos_repo.add_gos(gos);
}
vector<Gos> Service::load_gos() {
    return gos_repo.load_gos();
}
void Service::add_afhendingarstadir(const Afhendingarstadir& afhendingarstadir) {
    afhendingarstadir_repo.add_afhendingarstadir(afhendingarstadir);
}
vector<Afhendingarstadir> Service::load_afhendingarstadir() {
    return afhendingarstadir_repo.load_afhendingarstadir();
}
void Service::add_pizzabotn(const PizzaBotn& pizzabotn) {
    pizzabotn_repo.add_pizzabotn(pizzabotn);
}
vector<PizzaBotn> Service::load_pizzabotn() {
    return pizzabotn_repo.load_pizzabotn();
}

void Service::add_order(string name) {
    order_repo.add_order(name);
}
void Service::add_order_end(string name) {
    order_repo.add_order_end(name);
}
vector<Order> Service::find_order(string name) {
    return order_repo.find_order(name);
}
vector<Order> Service::find_order_name(string nafn,string name) {
    return order_repo.find_order_name(nafn, name);
}
vector<Order> Service::change_merking(string nafn, string name) {
    return order_repo.change_merking(nafn, name);
}
void Service::add_tilbuinn(string name, string tommur, string botn, string alegg, string medlaeti, string gos, string verd, string greitt, string nafn, string breyta) {
    order_repo.add_tilbuinn(name, tommur, botn, alegg, medlaeti, gos, verd, greitt, nafn, breyta);
}
vector<Order> Service::find_tilbuinn(string name) {
    return order_repo.find_tilbuinn(name);
}
vector<Order> Service::find_tilbuinn_name(string nafn, string name) {
    return order_repo.find_tilbuinn_name(nafn, name);
}
bool Service::isValidSize(string tommur) {
    for(unsigned int i = 0; i < tommur.length(); i++) {
        if(!isdigit(tommur[i])) {
            throw InvalidSizeException();
        }
    }
    return true;
}
bool Service::isValidPrice(int price) {
    if(price < 0){
        throw InvalidPriceException();
    }
    return true;
}
bool Service::isValidName(string name) {
    for(unsigned int i = 0; i < name.length(); i++) {
        if(!isalpha(name[i])) {
            throw InvalidNameException();
        }
    }
    return true;
}
