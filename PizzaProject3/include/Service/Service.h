#ifndef SERVICE_H
#define SERVICE_H
#include "Topping.h"
#include "PizzaSize.h"
#include "Repositories.h"

class Service
{
    public:
        Service();
        void add_topping(const Topping& topping);
        void add_pizza_size(const PizzaSize& pizza_size);

        vector<Topping> load_topping();
        vector<PizzaSize> load_pizza_size();

    private:

        Repositories topping_repo;
        Repositories pizza_size_repo;
};

#endif // SERVICE_H
