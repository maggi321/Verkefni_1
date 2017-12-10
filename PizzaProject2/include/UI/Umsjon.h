#ifndef UMSJON_H
#define UMSJON_H
#include "Pizza.h"
#include "Toppings.h"
#include "OtherProducts.h"
#include "PizzaRepository.h"
#include "ToppingRepository.h"
#include "OtherProductsRepository.h"
#include <stdlib.h>

class Umsjon
{
    public:
        Umsjon();
        virtual ~Umsjon();
        void displayUmsjon();
        void skraStaerdirOgBotna();
        void addToppings();
        void addOtherProducts();
    protected:

    private:
        PizzaRepository pizzaRepo;
        ToppingRepository toppingRepo;
        OtherProductsRepository otherRepo;
};

#endif // UMSJON_H
