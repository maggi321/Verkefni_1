#ifndef ORDER_H
#define ORDER_H
#include "Service.h"
#include "PizzaSize.h"

class Order {
    public:
        Order();
        void order_pizza_size();

    private:
        Service pizza_size_service;
};

#endif // ORDER_H
