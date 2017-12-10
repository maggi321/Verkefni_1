#ifndef UMSJONUI_H
#define UMSJONUI_H
#include "Service.h"
#include "Topping.h"
/*
#include "Pizza.h"
#include "Toppings.h"
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
};

#endif // UMSJONUI_H
