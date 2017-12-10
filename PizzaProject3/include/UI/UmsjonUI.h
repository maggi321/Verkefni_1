#ifndef UMSJONUI_H
#define UMSJONUI_H
#include "Service.h"
#include "Topping.h"
#include "PizzaSize.h"
/*
#include "OtherProducts.h"
#include "PizzaRepository.h"
#include "ToppingRepository.h"
#include "OtherProductsRepository.h"
*/
#include <stdlib.h>

class UmsjonUI {
    public:
        UmsjonUI();
        void displayUmsjonUI();

    protected:

    private:
        Topping create_topping();
        Service topping_service;
        PizzaSize create_pizza_size();
        Service pizza_size_service;
};

#endif // UMSJONUI_H
