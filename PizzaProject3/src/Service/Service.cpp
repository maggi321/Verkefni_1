#include "Service.h"

Service::Service()
{
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
