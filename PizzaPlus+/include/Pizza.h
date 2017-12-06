#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();
        void makeGpizzaVerd();
        void makePizzaOrder();

    private:
        int price;
        int total;
};

#endif // PIZZA_H
