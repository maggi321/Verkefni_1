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
vector<Order> Service::find_order_name(string name) {
    return order_repo.find_order_name(name);
}
vector<Order> Service::change_merking(string name, string merking) {
    return order_repo.change_merking(name, merking);
}
