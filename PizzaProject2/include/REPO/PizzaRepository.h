#ifndef PIZZAREPOSITORY_H
#define PIZZAREPOSITORY_H

#include "Pizza.h"
#include <fstream>


class PizzaRepository
{
    public:
        PizzaRepository();
        virtual ~PizzaRepository();

        void storePizza(const Pizza& pizza);
        Pizza retrievePizza();

    private:
};

#endif // PIZZAREPOSITORY_H
