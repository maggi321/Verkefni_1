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
