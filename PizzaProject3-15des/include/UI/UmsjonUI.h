#ifndef UMSJONUI_H
#define UMSJONUI_H
#include "Service.h"
#include "Topping.h"
#include "PizzaSize.h"
#include "Medlaeti.h"
#include "Gos.h"
#include "Afhendingarstadir.h"
#include "PizzaBotn.h"

#include <stdlib.h>

class UmsjonUI {
    public:
        UmsjonUI();
        void displayUmsjonUI();

    protected:

    private:

        Service service;
        Topping create_topping();
        PizzaSize create_pizza_size();
        Medlaeti create_medlaeti();
        Gos create_gos();
        Afhendingarstadir create_afhendingarstadir();
        PizzaBotn create_pizzabotn();
};

#endif // UMSJONUI_H
