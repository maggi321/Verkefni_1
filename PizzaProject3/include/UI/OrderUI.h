#ifndef ORDERUI_H
#define ORDERUI_H
#include "Service.h"

class OrderUI {
    public:
        OrderUI();
        int order_pizza_size();
        int order_pizza_botn();
        int order_pizza_topping();
        int order_medlaeti();
        int order_gos();
        void create_order();

    private:
        Service pizza_size_service;
        Service pizzabotn_service;
        Service topping_service;
        Service medlaeti_service;
        Service gos_service;
};

#endif // ORDER_H
