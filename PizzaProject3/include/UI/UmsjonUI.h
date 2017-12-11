#ifndef UMSJONUI_H
#define UMSJONUI_H
#include "Service.h"
#include "Topping.h"
#include "PizzaSize.h"
#include "Medlaeti.h"
#include "Gos.h"

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

        Medlaeti create_medlaeti();
        Service medlaeti_service;

        Gos create_gos();
        Service gos_service;
};

#endif // UMSJONUI_H