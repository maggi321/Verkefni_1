#ifndef ORDERUI_H
#define ORDERUI_H
#include "Service.h"
#include <stdlib.h>

class OrderUI {
    public:
        OrderUI();
        void order_afhendingarstadir();
        int order_pizza_size();
        int order_pizza_botn();
        int order_pizza_topping();
        int order_medlaeti();
        int order_gos();
        void order_greitt();
        void order_name();
        void create_order();

    private:
        Service service;

        string name;
        int price;
        string tommur;
        int number;
};

#endif // ORDER_H
